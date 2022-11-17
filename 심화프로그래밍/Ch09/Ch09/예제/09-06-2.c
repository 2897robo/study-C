#include <stdio.h>

typedef struct {
	unsigned short Grade:4;		// 학년 4비트
	unsigned short Class:5;		// 반 5비트
	unsigned short Number:7;		// 번호 7비트
} student;

int main()
{
	unsigned char x;
	student s;
	printf("학년 입력(1~12): ");
	scanf("%u", &x);		// 비트 필드는 개별적으로 주소가 없으므로
	s.Grade = x;		// 다른 변수에 읽어서 다시 비트필드에 저장
			// 즉, 비트필드는 직접 scanf에 사용할 수 없음.
	printf("반 입력(1~31): ");
	scanf("%u", &x); 
	s.Class = x;
	printf("번호 입력(1~127): ");
	scanf("%u", &x);
	s.Number = x;
	printf("%u학년 %u반 %d번\n", s.Grade, s.Class, s.Number);
	s.Grade = 10, s.Class = 15, s.Number = 20;
	printf("%u학년 %u반 %d번\n", s.Grade, s.Class, s.Number);
	printf("구조체의 크기: %dByte\n", sizeof(student));
}
