#include <stdio.h>
int main()
{
	int x, y;
	x = 1;
	while ( x<=10 ) { // 10�� ����ϱ� ���� ���� 
		y=1;
		while ( y<=x ) {  // �� �ٿ� x���� �� ���
			printf("*");
			y++;
		}
		printf("\n"); // �� �� ����ϰ� �� �� ���� �ٲ۴�.
		x++;
	}
}
