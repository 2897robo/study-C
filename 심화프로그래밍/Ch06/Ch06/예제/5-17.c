#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 김기욱");
	char str[] = "This is test string.", str2[100];
	char *pch;
	int len, p;
	len = strlen(str);	// 문자열의 길이 획득
	pch = &str[len-1];	// 문자열의 끝 바로 앞에 위치: NULL 문자 바로 앞
	strcpy(str2, str);	// 원래 문자열을 str2로 복사
	while (len >0) {		// str2에 str 문자를 거꾸로 붙이기
		strncat(str2, pch, 1);		// 한 문자 str2에 붙이기
		pch--;		// 포인터 앞으로 이동
		len--;		// 길이 하나 감소
	}
	printf ("%s\n", str2);
}
