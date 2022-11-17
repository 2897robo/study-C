#include <stdio.h>
int main()
{
	printf("20194487 김기욱");

	int x, y;
	do {
		printf("양수를 입력하시오 : "); 
		scanf("%d", &x);
	} while (x<=0);
	printf("x = %d\n", x);
}
