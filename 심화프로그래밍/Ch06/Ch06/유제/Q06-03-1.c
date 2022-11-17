#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char c[30] = "This Is a Test Program!";
	for(i=0; i<strlen(c); i++) {	//문자열의 길이 구하는 함수 strlen(문자열);
		if(c[i] >= 'a' && c[i] <= 'z')	// 소문자이면
			c[i] -= 32;	// 대문자로 변경
		else if(c[i] >='A' && c[i] <= 'Z') // 대문자이면
			c[i] += 32;	// 소문자로 변경
	}
	puts(c);
}
