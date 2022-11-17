#include <stdio.h>
int main()
{
	char character;
	printf("문자를 입력하시오 : ");
	character = getc(stdin);
	printf("입력된 문자 = ");
	putc(character, stdout);
	putc('\n', stdout);
}
 
