#include <stdio.h>

int main()
{
	int cnt, i=0;

	printf("정수 입력: ");
	scanf("%d", &cnt);
	while( i++ < cnt )
		printf("*");
	printf("\n");
}
