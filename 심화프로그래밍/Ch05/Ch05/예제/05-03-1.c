#include <stdio.h>
#include <conio.h>
int main()
{
	int dan, y;
	dan = 2;		// 2단부터 시작한다.
	while( dan < 10) {	// 9단까지
		printf("%8d단\n", dan);
		y = 1;		// 각 단에 곱해지는 수는 1부터 시작한다.
		while(y < 10) { // 각 단에 곱해지는 수는 9까지
			printf(" %2d * %2d = %2d\n", dan, y, dan*y); // 화면에 출력
			y++;	// 곱해지는 수 증가
		}
		printf("\n\n");
		getch(); 
		dan++;		// 단 증가
	}
}
