#include <stdio.h>
#include <string.h>
int bin2dec(char *);		// 전에 사용했던 함수
int is32digit_binary(char *);	// 전에 사용했던 함수

int main(int argc, char* argv[])
{ 
	char a[100];
	if (argc !=2) {
		printf("사용방법 : \n\t mainargs 2진수\n"); 
		return 0; 
	} 
	sscanf(argv[1], "%[01]", a); // 0과 1만 입력으로 받아들임. 
	if (is32digit_binary(a))
	    printf("2진수 %s의 10진수 값은 %d\n", a, bin2dec(a));
}

/* 2진수 배열을 10진수로 변경시키는 함수 */ 
int bin2dec(char *x)
{
	int i, dec=0, exp=1, size;
	size = strlen(x);
	for (i=size-1; i>=0; i--) { // 2진수 뒤에서부터 카운트 한다.
		// 해당하는 자릿수가 1일 때만 2의 해당 누승을 더해준다. 
		if(x[i] == '1')
			dec |= exp;
		exp <<= 1; // 루프를 한 번씩 돌 때마다 2를 곱해준다. 
	}
	return dec;
}
// 전에 작성했던 함수를 그대로 사용하였음

/* 문자열 x가 제대로 입력되었는지를 검사하는 함수 */ 
int is32digit_binary(char *x)
{
	if( strlen(x) > 32 ) {
		printf("32자리를 초과하였습니다!!!\n");
		return 0;
	}
	return 1;
} // 전에 작성했던 함수를 그대로 사용하였음
