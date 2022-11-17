#include <stdio.h>
int main()
{
 	char bin[50];
 	printf("2진수를 입력하시오 : ");
	scanf("%[01]", bin); 
	printf("입력된 2진수: %s\n", bin);
	fflush(stdin);
}
