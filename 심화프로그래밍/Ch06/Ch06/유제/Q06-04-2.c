#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
	int cnt_word = 0, i = 0, in_word = 0;
	char str[100];
	printf("영어 문장을 입력하시오 : "); 
	gets(str);
	while (str[i]) {
		if ( isspace(str[i]) || iscntrl(str[i]) ||
		    ispunct(str[i]) )
			in_word = 0;
		else {
			if ( !in_word )
				cnt_word++;
			in_word = 1;
		}
		i++;
	}
	printf("단어의 갯수 : %d\n", cnt_word);
}
