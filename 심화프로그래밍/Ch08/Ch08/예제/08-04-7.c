#include <stdio.h>
#include <string.h>

int bin2dec(char *);
int is32digit_binary(char *);

int main()
{
	char a[100]; 
	printf("2진수 32자리 이하를 입력하시오 : ");
	scanf("%[01]", a);		// 0과 1만 입력으로 받아들임. 

	if(is32digit_binary(a))
		printf("2진수 %s의 10진수 값은 %d\n", a, bin2dec(a));
}

/* 2진수 배열을 10진수로 변경시키는 함수 */ 
int bin2dec(char *x)
{
	int i, dec=0, exp=1, size;
	size = strlen(x);
	for (i=size-1; i>=0; i--) {	// 2진수의 뒷자리에서부터 카운트 해준다. 
		// 해당하는 자릿수가 1일 때만 2의 해당 자승을 더해준다. 
		if(x[i] == '1')
			dec |= exp;
		exp <<= 1; // 루프를 한번씩 돌 때마다 2를 곱해준다. 
	}
	return dec;
}

/* 문자열 x가 제대로 입력되었는지를 검사하는 함수 */ 
int is32digit_binary(char *x) {
	if( strlen(x) > 32 ) {
		printf("32자리를 초과하였습니다!!!\n");
		return 0;
	}
	return 1;
}
