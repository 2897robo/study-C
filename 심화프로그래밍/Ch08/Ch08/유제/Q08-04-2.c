#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int WordMatchCount(char *, char *);

int main()
{
	char *str, count=0, search[10];
	str = (char *)malloc(400);
	strcpy(str, "홍길동전은 허균이 지은 한국의 대표 의적, 즉 의로운 도적을 소재로 한 소설을 말한다."
				" 심청전, 춘향전과 더불어 한국의 대표 고전소설로 꼽힌다.");
	printf("검색할 단어를 입력하시오 : ");
	scanf("%s", search);
	count = WordMatchCount(str, search);
	printf("\"%s\"은(는) %d번 나옴.\n", search, count);
 	free(str);
}

int WordMatchCount(char *s, char *w) {
	char count=0;
	while(s) {
		s = strstr(s, w);
		if(s) {
			count++;
			s += strlen(w);
		}
	}
	return count;
}
