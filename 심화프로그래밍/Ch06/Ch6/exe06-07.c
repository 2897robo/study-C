#include <stdio.h>
/* 이 부분을 바꾸면 더 많은 자리 수까지 계산할 수 있습니다. 현재는 4000자리까지만 가능합니다.*/ 
#define DIM 4000

int main()
{
	int i, j, pow2[DIM], x, temp; 
	/* pow2 배열은 계산결과를 나누어서 저장할 장소 */ 

	while(1) {
		double power2=1;
		for(i=0; i<DIM; i++)
			pow2[i] = 0; /* 초깃값으로 모두 0을 둠 */ 

		printf("\n현재는 4000자리(2^13280)까지 계산이 가능합니다.\n");
		printf("2의 몇 제곱을 계산하시겠습니까?(음수 : exit) : ");
		scanf("%d", &x);   /* x!의 x를 읽음 */ 
		if(x>13281) {
			/* 2^13281 이상이면 그냥 끝냄 위의 DIM이 수정되면, 이 부분도 수정하여야 함 */ 
			printf("%d!은 계산할 수 없습니다.\n", x);
			return;
		} else if( x < 0 )
			break;

		pow2[DIM-1]=1;	/*맨 마지막 배열 요소에 초깃값 1 저장, 그렇지 않으면 모두 0으로 나옴*/ 
		for(i=1; i<=x; i++) {
			for(j=DIM-1; j>=0; j--)		/* 정해진 순서에 따라 모든 자리 수에 값을 곱한다. */ 
				pow2[j] *= 2;

			for(j=DIM-1; j>=0; j--) {
				temp = pow2[j] / 10;	/* 10이상 자리를 계산 */ 
				pow2[j] = pow2[j] % 10;	/* 1의 자리만 남기고 */ 
				pow2[j-1] += temp;  /* 10이상 되는 수를 윗자리(캐리)로 넘겨서 더함 */ 
			}
		}
		for(i=0; i<DIM; i++)
		/* 앞자리가 0이면 출력하지 않기 위하여, 어디까지가 0인지 계산 */ 
			if (pow2[i] != 0) { 
				j=i;
				break;
			}

		printf("\n정수값  2^%d = \n",x);
		printf("%d",pow2[j]);	/* 앞쪽의 0을 제외한 첫째자리 출력 */ 
		for ( i=j+1; i <DIM; i ++)	/* 나머지 실제 데이터가 저장된 자리 출력 */ 
			printf("%1d", pow2[i]);

		if(x>1023) { /* double로써 계산할 수 없으면 끝낸다. */ 
			printf("\n\ndouble float로써 계산할 수 있는 값은");
			printf(" 최대 2^1023입니다.\n");
			printf("그러므로 2^%d은 계산할 수 없습니다.\n", x);
		} else {  /* double로써 계산할 수 있으면 계산한다. */ 
			for ( i=1; i<=x; i++)
				power2 *= 2;
			printf("\n\n실수값(double float)\n ");
			printf("2^%d=%20.16e\n", x, power2);
		}
	}
}
