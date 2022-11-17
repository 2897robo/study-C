#include <stdio.h>
#include <string.h>
#define SIZE 51
int main()
{
	printf("20194487 김기욱");
	int x[SIZE]={0,}, y[SIZE]={0,}, z[SIZE]={0,}, i, j, carry;
	char a[SIZE], b[SIZE], c[SIZE];
	printf("첫 번째 수 입력:");
	scanf("%[0123456789]", a);		// 숫자만 입력받기
	fflush(stdin);			// 입력장치 버퍼 비우기
	printf("두 번째 수 입력:");
	scanf("%[0123456789]", b);
	fflush(stdin);
	for(i=strlen(a)-1, j=SIZE-1; i>=0; i--, j--)
		x[j] = a[i] - '0';		// a의 끝에서부터 문자를 숫자로 변환 
	for(i=strlen(b)-1, j=SIZE-1; i>=0; i--, j--)
		y[j] = b[i] - '0';		// b의 끝에서부터 문자를 숫자로 변환 

	carry = 0;		// 캐리를 0으로 초기화 
	for(i=SIZE-1; i>=0; i--) {		// 덧셈 시작 
		z[i] = x[i] + y[i] + carry;		// 덧셈 
		carry = z[i] / 10;				// 캐리 계산 
		z[i] = z[i] % 10;				// 현재 자리 값 계산 
	}

	for(i=0; i<SIZE; i++)	// 계산 결과 처음 0이 아닌 곳으로 이동 
		if(z[i] != 0)		// 처음 0이 아닌 값을 만나면 루프를 벗어난다. 
			break;
	// 처음 0이 아닌 곳에서부터 문자로 변환하여 문자열 c에 저장한다. 
	for(j=0; i<SIZE; i++, j++)
		c[j] = (char)z[i] + '0';	// 계산 결과를 문자로 변환 
	c[j] = 0;		// NULL 삽입 
	printf("\n%52s\n+ %50s\n= %50s\n", a, b, c); // 결과 출력 
}
