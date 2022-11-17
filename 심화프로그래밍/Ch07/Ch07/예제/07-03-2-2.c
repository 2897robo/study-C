#include <stdio.h>
int main()
{
	char *str, *s;
	str = "C language Programming."; // 이와 같이 할 수 없다. strcpy도 적용되지 않는다.
	s = str;
	while(*s)
		printf("%s\n", s++);
	printf("%s ", str);
}
