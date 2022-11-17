#include <stdio.h>

void itoa(int , char *, int );

int main()
{
	printf("20194487 김기욱\n");
	int dec;
	char bin[33];
	
	printf("%5s|%5s |%5s |%9s\n", "10진", "16진", "8진", "2진");
	for(dec = 0; dec < 256; dec++) { // 0부터 255까지 각 진법으로 변환
		itoa(dec, bin, 2);		// dec를 2진수로 바꾸어 bin에 저장 
		printf("%4d | 0x%02X | %04o | %08s\n", dec, dec, dec, bin);
	}
}

void itoa(int x, char *b, int r)
{
	char *radix = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *sp, *ep;
	if( r < 2 || r > 36)
		printf("Error, itoa()'s 3rd argument is greater than 2 "
			"and less than 36");
	if( x == 0) {
		*b = '0';
		*++b = '\0';
		return;
	}
	ep = b;
	while(x) {	// 나머지 계산하여 문자열 b에 저장하기 
		*ep = *(radix + x%r); // 나머지값에 해당되는 문자를 찾아서 저장 
		x /= r;		// 몫 계산 
		ep++;		// 포인터 하나 증가 
	}
	*ep = '\0';		// 끝에 널 문자 삽입 
	ep--;			// NULL 앞으로 포인터 이동 
	sp = b;			// sp를 b의 첫 번째 주소로 지정 
	while(sp < ep) {		// 문자열 거꾸로 만들기
		*sp ^= *ep;	// 문자열 위치 바꾸기 
		*ep ^= *sp;
		*sp ^= *ep;
		sp++;		// 첫 포인터 증가 
		ep--;		// 마지막 포인터 감소 
	}
}
