#include <stdio.h>
int main()
{
	char character;
	printf("문자를 입력하시오 : ");
	character = getchar();
	printf("입력된 문자 = ");
	putchar(character);
	printf("\n");
}
