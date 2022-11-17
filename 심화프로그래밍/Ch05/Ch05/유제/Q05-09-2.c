#include <stdio.h>
int main()
{
	int x, y, t;
	
	printf("10진 정수 입력: ");
	scanf("%d", &x);
	t = x;
	y = 1;
	while(t){
		y *= 10;
		t /= 10;
	}
	y -= x;
	printf("%d의 10의 보수는\n%d\n", x, y);
}
