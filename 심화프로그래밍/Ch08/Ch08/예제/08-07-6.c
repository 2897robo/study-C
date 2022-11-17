#include <stdio.h>
void change_var();

int main()
{
 	extern int x;
	// 전역 변수가 아래쪽, 또는 다른 파일에 선언되었을 때, 공유하는 법
 	x = 30;
 	printf("x=%d\n", x);
 	change_var();
 	printf("x=%d\n", x);
}

int x;	// 전역 변수 

void change_var()
{
	x = 20;
}
