#include <stdio.h>
int main()
{
	int x, y;
	x = 1;
	while ( x<=10 ) { // 10줄 출력하기 위한 루프 
		y=1;
		while ( y<=x ) {  // 한 줄에 x개의 별 출력
			printf("*");
			y++;
		}
		printf("\n"); // 한 줄 출력하고 난 뒤 줄을 바꾼다.
		x++;
	}
}
