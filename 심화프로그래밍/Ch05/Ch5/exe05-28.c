#include <stdio.h>

int main()
{
	int x, y;

	x = 1;
	while( x<=10 ) {
		y=1;
		printf("%*s", 10-x, "");	// *�� ��� ���� ���� ��� 

		y=1;
		while (y<=2*x-1) { // *�� ����ϴ� ���� 
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
	x = 1;
	while( x <= 5) { // ���� ����� ����ϴ� ���� 
		printf("%8s***\n", " ");
		x++;
	}
}
