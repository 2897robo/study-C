#include <stdio.h>
int main()
{
	int x, d=2; // d는 처음 2부터 시작함
	printf("정수 입력 : ");
	scanf("%d", &x);
	while(x != 1) {
		if(x % d == 0) {
			printf("%d ", d);
			x /= d;
		}
		else
			d++;
	}
	printf("\n");
}
