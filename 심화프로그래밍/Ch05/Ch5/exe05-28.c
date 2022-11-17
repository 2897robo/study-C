#include <stdio.h>

int main()
{
	int x, y;

	x = 1;
	while( x<=10 ) {
		y=1;
		printf("%*s", 10-x, "");	// *을 찍기 전의 공백 출력 

		y=1;
		while (y<=2*x-1) { // *을 출력하는 루프 
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
	x = 1;
	while( x <= 5) { // 나무 기둥을 출력하는 루프 
		printf("%8s***\n", " ");
		x++;
	}
}
