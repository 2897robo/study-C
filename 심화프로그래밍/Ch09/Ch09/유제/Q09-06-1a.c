#include <stdio.h>
#include <stdlib.h>

struct floats {	// 실수를 각 부분별로 구별하기 위한 비트필드 구조체
	unsigned int mantissa:23;		// little endian이므로 거꾸로 저장
	unsigned int exp:8;		// 순서가 맞지 않으면 정상적으로
	unsigned int sign:1;		// 출력이 안됨
};

typedef union int_or_float { 	// 세 가지의 자료를 하나의 공용체로 선언
	int i;			// 정수 : 32비트
	float f;			// 단일정밀도 실수 : 32비트
	struct floats fs;		// 비트필드구조체 : 32비트
} number;

char *CvtBinary(number);
void PrintBitField(number);

int main() {
	number n;

	n.i = 236523; 		// 정수 대입 
	printf("%10d -> %032s\n", n.i, CvtBinary(n));
		// 32자리로 출력하고 앞의 빈자리에 0을 출력한다. 

	n.f = 12.34f; 		// 실수 대입 
	printf("%10.4f -> %032s\n", n.f, CvtBinary(n));
	PrintBitField(n);

	n.f = 1.0f; 		// 실수 대입 
	printf("%10.4f -> %032s\n", n.f, CvtBinary(n));
	PrintBitField(n);

	n.f = -1.75f; 		// 실수 대입 
	printf("%10.4f -> %032s\n", n.f, CvtBinary(n));
	PrintBitField(n);

	n.fs.exp = 254; // 32비트 부동소수점중 가장 큰 양수 
	n.fs.sign = 0;
	n.fs.mantissa = 0x7fffff;
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));

	n.fs.sign = 1;  // 32비트 부동소수점중 가장 작은 음수 
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));

	n.fs.exp = 0;  // 32비트 부동소수점중 0에 가장 가까운 양수 
	n.fs.sign = 0;
	n.fs.mantissa = 1;
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));

	n.fs.sign = 1;  // 32비트 부동소수점중 0에 가장 가까운 음수 
	printf("%14.4e -> %032s\n", n.f, CvtBinary(n));
}

char *CvtBinary(number x) {	// 정수를 2진수 문자열로 바꾸어 반환함
	static char bin[33];
	itoa(x.i, bin, 2);
	return bin;
}

void PrintBitField(number x) {	// 각 부분별로 출력함
	char bin[33];
	printf("%10.4f -> 부호:%1d, ", x.f, x.fs.sign); // 부호 출력 
	itoa(x.fs.exp, bin, 2);		// 지수를 2진수로 바꾸어 출력 
	printf("지수:%08s, ", bin);
	itoa(x.fs.mantissa, bin, 2);		// 가수를 2진수로 바꾸어 출력 
	printf("가수:%023s\n", bin);
}
