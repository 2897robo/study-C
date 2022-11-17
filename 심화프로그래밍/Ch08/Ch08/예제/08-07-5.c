#include <stdio.h>
void print_var();

int main()
{
 	x = 10; // 컴파일 할 때 에러 발생, 선언을 뒤쪽에 했음
 	printf("x=%d\n", x);
 	print_var();
 	printf("x=%d\n", x);
}

int x;	// 전역 변수, 선언된 이후 부터 사용가능

void print_var()
{
	x = 20; // 전역 변수 사용
}
