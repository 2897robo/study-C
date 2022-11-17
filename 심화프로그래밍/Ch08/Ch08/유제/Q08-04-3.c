#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *insert_comma(int);

int main()
{
	int input;
	char *r; 
	printf("정수 입력 : ");
	scanf("%d", &input);
	r = insert_comma(input);
	printf("%s\n", r);
}

char *insert_comma(int x) {
	int pos=0, cnt=0, sign=0;
	static char result[20];
	if(x < 0) {
		 sign = 1;
		 x = -x;
	}
	while(x >0) { // 숫자를 ASCII코드로 만들어 저장 
		result[pos++] = (x % 10) + 48;
		cnt++;		// 숫자의 개수 카운트 
		if( x >= 10 && (cnt % 3 == 0) )
		// 남은 수가 10보다 클 때 세 자리씩 끊어서 콤마 넣기 
			result[pos++] = ',';
		x /= 10;
	}
	if(sign)	// 음수이면 
		result[pos++] = '-';		// '-' 기호 넣기 
	result[pos] = '\0';	// 문자열의 마지막에 널 문자 넣기 

	return ((char *)strrev(result));	
		// 문자열 뒤집기 함수 호출, strrev는 표준함수가 아님. 
}
