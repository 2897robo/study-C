#include <stdio.h>

int main()
{
	int a, b, x, sum=0;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);

	for(a=1; a<=x; a++) {
		sum = 0;
		printf("(");		// 시작할 때 괄호(를 출력한다. 
		for(b=1; b<=a; b++) {
			printf("%d", b);
			if(a != b)
				printf("+");
			sum += b;		// 합계를 누적한다. 
		}
		printf(")=%d\n", sum);		// 끝날 때 괄호)와 =를 출력하고 합을 출력한다. 
	}
}
