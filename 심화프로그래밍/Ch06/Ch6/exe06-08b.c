// 3자리씩 계산 
#include <stdio.h>
#define DIM 1000
/* 이 부분을 바꾸면 더 많은 자릿수 까지 계산할 수 있습니다. 현재는 3000자리(1142!)까지만 가능합니다. */ 

int main()
{
	int i, j, fact[DIM], x, temp; 
	/* fact배열은 계산결과를 나누어서 저장할 장소 */ 

	while(1) {
		double factorial=1;
		for(i=0; i<DIM; i++)
			fact[i] = 0; /* 초깃값으로 모두 0을 둠 */ 

		printf("\n\n현재는 3000자리(1142!)까지 계산이 가능함.\n");
		printf("계산할 값을 입력하시오(0 : exit) : ");
		scanf("%d", &x);	/* x!의 x를 읽음 */ 

		if(x>1142) {
			/* 1142!이상이면 그냥 끝냄 위의 DIM이 수정되면 이 부분도 수정하여야 함 */ 
			printf("%d!은 계산할 수 없습니다.\n", x);
			return;
		} else if( x <= 0 )
			break;

		fact[DIM-1]=1; /* 맨 마지막 배열 요소에 초깃값 1 저장, 그렇지 않으면 모두 0으로 나옴 */ 
		for(i=1; i<=x; i++) {
			for(j=DIM-1; j>=0; j--)	/* 정해진 순서에 따라 모든 자릿수에 값을 곱한다. */ 
				fact[j] *= i;

			for(j=DIM-1; j>=0; j--) {
				temp = fact[j] / 1000;	/* 1000이상 자리를 계산 */ 
				fact[j] = fact[j] % 1000;	/* 1000미만 자리만 남기고 */  
				fact[j-1] += temp;	/* 1000이상 되는 수를 윗자리로 넘겨서 더함 */ 
			}
		}

		/* 앞자리가 0이면 출력하지 않기 위하여, 어디까지가 0인지 계산 */ 
		for(i=0; i<DIM; i++)
			if (fact[i] != 0) { 
				j=i;
				break;
			}

		printf("\n정수값\n %d! = ",x);
		printf("%d",fact[j]);	/* 0을 제외한 첫째자리 출력 */ 

		for ( i=j+1; i <DIM; i ++) {   /* 나머지 자리 출력 */ 
			if (fact[i] >= 100 )		/* 각 자리가 100이상이면 그냥출력 */ 
				printf(",%d", fact[i]);
			else if(fact[i] >= 10)
				printf(",0%d", fact[i]);	/*100미만 10이상이면 앞에 0을 붙여 출력 */ 
			else if(fact[i] >= 1)
				printf(",00%d", fact[i]);	/*10미만 1이상이면 앞에 00을 붙여 출력 */ 
			else 
				printf(",000");  /* 0이면 000출력 */ 
		}
		if(x>170) {  /* double로써 계산할 수 없으면 끝낸다. */ 
			printf("\n\ndouble float로써 계산할 수 있는 값은 ");
			printf("최대 170!입니다.\n");
			printf("그러므로 %d!은 계산할 수 없습니다.\n", x);
		}
		else {  /* double로써 계산할 수 있으면 계산한다. */ 
			for ( i=1; i<=x; i++) factorial *= i;
			printf("\n\n실수값(double float)\n");
			printf(" %d!=%20.16e\n", x, factorial);
		}
	}
}
