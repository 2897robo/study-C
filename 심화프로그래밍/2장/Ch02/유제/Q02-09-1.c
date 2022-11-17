#include <stdio.h>
#include <conio.h>
int main()
{
	char character;
	printf("문자를 입력하시오 : ");
	character = getch();
	printf("\n");

	printf("입력 문자 = ");
	putch(character);
	putch('\n');
	printf("앞의 문자 = ");
	putch(character-1);
	putch('\n');
	printf("뒤의 문자 = ");
	putch(character+1);
	putch('\n');
}
