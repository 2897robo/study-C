#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
	int cnt_a =0, cnt_b = 0, i=0;
	char str[100];
	printf("영어 문장을 입력하시오 : "); 
	gets(str);
	
	while(str[i]) {
		if(isalnum(str[i]))
			cnt_a++;
		if(isspace(str[i])|| ispunct(str[i]))
			cnt_b++;
		i++;
	}
	printf("영숫자의 개수 : %d\n", cnt_a);
	printf("공백 또는 구두문자의 개수 : %d\n", cnt_b);
}
