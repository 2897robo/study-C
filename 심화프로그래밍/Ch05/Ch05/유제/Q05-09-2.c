#include <stdio.h>
int main()
{
	int x, y, t;
	
	printf("10�� ���� �Է�: ");
	scanf("%d", &x);
	t = x;
	y = 1;
	while(t){
		y *= 10;
		t /= 10;
	}
	y -= x;
	printf("%d�� 10�� ������\n%d\n", x, y);
}
