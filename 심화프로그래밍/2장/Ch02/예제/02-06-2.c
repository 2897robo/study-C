#include <stdio.h>
int main()
{
	char string[100];
	printf("문자열을 입력하시오 : ");
	scanf("%s", string);
 	printf("입력된 문자열 = %s\n", string);
	fflush(stdin); 
	printf("문자열을 입력하시오 : ");
	scanf("%[^\n]", string);
	printf("입력된 문자열 = %s\n", string);
}
