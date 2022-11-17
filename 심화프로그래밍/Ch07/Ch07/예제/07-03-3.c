#include <stdio.h>
#include <string.h>
int main()
{
	char str[30] = "C programming language";
	char target[100], i;
	for(i=0; i<strlen(str);i++)	// 문자열 복사
		*(target+i) = *(str+i);
	*(target+i) = '\0';	// 문자열의 끝에 널 삽입
	printf("str: %s\n", str);
	printf("target: %s\n", target);
}
