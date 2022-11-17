#include <stdio.h> 
#include <stdlib.h>

typedef union int_or_float { 
	int i;
	float f;
} number;

int main()
{
	number n;
	static char num[33];

	n.i = 236523; 		// 정수 대입 
	itoa(n.i, num, 2);    // itoa는 표준함수는 아니지만 거의 대부분 지원
	printf("%10d -> %032s\n", n.i, num);
	// 32자리로 출력하고 앞의 빈자리에 0을 출력한다. 
	n.f = 20.5f; 		// 실수 대입 
	itoa(n.i, num, 2);		// 실수가 아닌 정수를 2진수로 변환 
	printf("%10.4f -> %032s\n", n.f, num);

	n.f = -0.2f; 		// 실수 대입 
	itoa(n.i, num, 2);		// 실수가 아닌 정수를 2진수로 변환 
	printf("%10.4f -> %032s\n", n.f, num);
} // 원칙적으로 실수는 직접 2진수로 나타내기가 힘들지만 이와 같이 가능하다.
