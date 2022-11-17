#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void StrSplit(char*, char*, char*);

int main()
{
	char *str, temp, in_str=0, *pos, *s2;
	int i=0, len;
	str = (char *)malloc(100);
	s2 = (char *)malloc(100);

	strcpy(str,"Use Split to separate parts from a string.");
	StrSplit(str, s2, "parts");
	printf( "%s\n", str);
	printf( "%s\n", s2);
	free(str);
	free(s2);
}

void StrSplit(char *s, char *t, char *p) {
	s = strstr(s, p); //분리할 지점 찾기
	strcpy(t, s);	// 뒤 부분을 t에 복사
	*s = '\0';	// 앞 부분의 문자열 끝에 널 삽입
}
// s: 원래 문자열, t: 분리한 뒤 부분 문자열 저장, 
// p: 분리할 시작 부분 문자열
// p라는 문자열을 찾아 그 문자열로 부터 다른 문자열에 저장
// 앞 부분은 p라는 문자열 바로 앞까지

