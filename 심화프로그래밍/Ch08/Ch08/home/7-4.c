#include <stdio.h>
void change_var();

int x;	// 전역 변수 

int main()
{
	printf("20194487 김기욱\n");
 	x = 10;	// 전역 변수 사용
 	printf("x=%d\n", x);
 	change_var();
 	printf("x=%d\n", x);
}

void change_var()
{
	x = 20;	// 전역 변수 사용
}
