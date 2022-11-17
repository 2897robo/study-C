#include <stdio.h>
int main()
{
	char string[100];
	printf("문자열을 입력하시오 : ");
	gets(string);
	printf("입력된 문자열 = ");
	puts(string);
	fflush(stdout);
}
 
