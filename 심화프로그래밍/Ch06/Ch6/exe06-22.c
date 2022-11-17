#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char danwi[][4] = {"", "십", "백", "천", "만", "십", "백", "천",
			"억", "십", "백", "천", "조", "십", "백", "천",
			"경", "십", "백", "천",	"해", "십", "백", "천"};
	char su[10][4] = {"영", "일", "이", "삼", "사", "오", "육", "칠", "팔", "구"};
	char in[50];
	int length, i, cnt=0;

	printf("정수를 입력하시오 : ");
	scanf("%[0123456789]", in);		// 숫자만 문자열로 입력받는다. 

	length = strlen(in);

	for(i=0; i<length; i++) {
		if(in[i] != '0') {	// 숫자가 0이 아닐 때 수 문자와 단위 출력 
			printf("%s%s", su[in[i]-48], danwi[length-i-1]);
			cnt++;
		}

		// 만, 억, 조, 경의 단위 출력: 단위의 시작 부분에 0이 포함된 경우. 
		if( (length-i-1)%4==0 && (length != i-1) &&
			( ( in[i] == '0' && in[i-1] != '0') || 
			 ( in[i] == '0' && in[i-1] == '0' && in[i-2] != '0') || 
			 ( in[i] == '0' && in[i-1] == '0' && in[i-2] == '0' && in[i-3] != '0') ) )
			printf("%s", danwi[length-i-1]);
		if( !((length-i-1)%4)) // 4자리마다 공백 출력. 
			printf(" ");
	}
	if(cnt == 0)
		printf("%s", su[0]); //전체 숫자(cnt변수)가 0일 때 “영”출력. 
	printf("\n");
}
