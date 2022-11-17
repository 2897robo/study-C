// Quiz 08-06-1b
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct doubles {	// 실수를 각 부분별로 구별하기 위한 비트필드 구조체
	unsigned int mantissa2;		// little endian이므로 거꾸로 저장
	unsigned int mantissa1:20;		// little endian이므로 거꾸로 저장
	unsigned int exp:11;		// 순서가 맞지 않으면 정상적으로
	unsigned int sign:1;		// 출력이 안됨
};

typedef union int_or_float { 	// 세 가지의 자료를 하나의 공용체로 선언
	double d;			// 단일정밀도 실수 : 32비트
	struct doubles dbf;		// 비트필드구조체 : 32비트
} number;

char *CvtBinary(number);
char *itob(unsigned int, int);

int main() {
	number n;

	n.d = -1.2; 		// 실수 대입 
	printf("%10.4f ->\n\t%s\n\n", n.d, CvtBinary(n));
	//PrintBitField(n);

	n.d = 1.0f; 		// 실수 대입 
	printf("%10.4f ->\n\t%s\n\n", n.d, CvtBinary(n));
	//PrintBitField(n);

	n.d = -1.75f; 		// 실수 대입
	printf("%10.4f ->\n\t%s\n\n", n.d, CvtBinary(n));
	//PrintBitField(n);

	// 64비트 부동소수점중 가장 큰 양수 
	n.dbf.sign = 0;
	n.dbf.exp = 2046;	// 지수중 가장 큰 값, 바이어스 1023, 2의 1023승 
	n.dbf.mantissa1 = 0xfffff; // 20비트 1 
	n.dbf.mantissa2 = 0xffffffff; // 32비트 1 
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64비트 부동소수점중 가장 작은 음수 
	n.dbf.sign = 1;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64비트 부동소수점중 0에 가장 가까운 양수 
	n.dbf.sign = 0;
	n.dbf.exp = 0;	// 지수중 가장 작은 값, 2의 -1023승 
	n.dbf.mantissa1 = 0;
	n.dbf.mantissa2 = 1;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64비트 부동소수점중 0에 가장 가까운 음수 
	n.dbf.sign = 1;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64비트 부동소수점
	n.dbf.sign = 0;
	n.dbf.exp = 0;	// 지수중 가장 작은 값, 2의 -1023승 
	n.dbf.mantissa1 = 0x80000; // 0.1
	n.dbf.mantissa2 = 0;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	// 64비트 부동소수점 
	n.dbf.sign = 0;
	n.dbf.exp = 1;	// 지수중 가장 작은 값, 2의 -1022승
	n.dbf.mantissa1 = 0; // 1.0
	n.dbf.mantissa2 = 0;
	printf("%14.4e ->\n\t%s\n\n", n.d, CvtBinary(n));

	system("PAUSE");
	return 1;
}

char *CvtBinary(number x) {	// 정수를 2진수 문자열로 바꾸어 반환함
	static char bin[70];
	static char *temp;

	// 부호를 2진수 문자열로 
	x.dbf.sign ? strcpy(bin, "1 ") : strcpy(bin, "0 ");

	temp = itob(x.dbf.exp, 11);	// 지수를 2진수 문자열로 
	strcat(bin, temp);
	strcat(bin, " ");

	temp = itob(x.dbf.mantissa1, 20);	// 가수 중 20비트를 2진수 문자열로 
	strcat(bin, temp);

	temp = itob(x.dbf.mantissa2, 32);	// 가수 중 32비트를 2진수 문자열로
	strcat(bin, temp);
	return bin;
}

// 정수를 2진수 문자열로 변환하는 함수 
char *itob(unsigned int n, int digit) // n:변환할 수, digit:자리 수 
{
	static char bin[65];
	bin[digit]=0;	// null, 맨 마지막 자리 
	while(digit) {
		digit--;
		bin[digit] = n%2 + '0'; // 문자화
		n /= 2;
	}
	return bin;
}
