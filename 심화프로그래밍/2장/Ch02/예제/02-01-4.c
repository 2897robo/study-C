#include <stdio.h>
int main()
{
	const char x='a';
	printf("%c ", 'A');  //문자 상수 'A'
	printf("%c ", x);    //문자 상수 x='a' 출력
	printf("%c ", 74);   //문자 상수 'J' 출력
	// ASCII 코드 'J' = 74 = 0X4a = 0X4A = 0112
}
