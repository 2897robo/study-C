#include <stdio.h>
int main()
{
 	char c, str1[20], str2[20];
	printf("문자, 문자열1, 문자열2 입력 : ");
	scanf("%c %s %s", &c, str1, str2);
 	printf("c=%c, str1=%s, str2=%s\n", c, str1, str2);
}
