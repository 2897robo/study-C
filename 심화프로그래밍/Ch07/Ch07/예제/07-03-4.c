#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[30] = "C programming language";
	char target[100], *s, *t;
	s = str;
	t = target;
	while(*s)	// 문자열 복사
		*t++ = *s++;
	*t = '\0';	// 문자열의 끝에 널 삽입
	printf("str: %s\n", str);
	printf("target: %s\n", target);
}

