#include <stdio.h>
int main()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	printf("%d ", x);
	for (; x > 1; ) {
		if (x % 2 == 0)
			x /= 2;
		else 
			x = x*3 + 1;
		printf("%d  ", x);
	}
}
