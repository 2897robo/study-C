#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[30] = "C programming language";
	char target[100], *s, *t;
	s = str;
	t = target;
	while(*s)	// ���ڿ� ����
		*t++ = *s++;
	*t = '\0';	// ���ڿ��� ���� �� ����
	printf("str: %s\n", str);
	printf("target: %s\n", target);
}

