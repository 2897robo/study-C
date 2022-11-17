#include <stdio.h>
int main()
{
	int x, d=1;
	printf("정수 입력 : ");
	scanf("%d", &x);
	printf("%d의 약수 = ", x);
	for ( ; x/2 >= d; d++)
		if (x % d == 0)
			printf("%d ", d);
	printf("%d \n", x); // 자기 자신 출력 
}
