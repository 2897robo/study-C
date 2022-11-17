#include <stdio.h>
#include <string.h>

int main ()
{
	char str[80];
	strcpy(str, "여러 개의 ");
	strcat(str, "문자열을 ");
	strcat(str, "연결하면 ");
	strcat(str, "이렇게 된다.");
	puts(str);
}
