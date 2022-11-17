#include <stdio.h>

typedef struct {
	unsigned int year:12;	// 12bit: 0~4095
	unsigned int month:4;	// 4bit: 0~15
	unsigned int day:5;	// 5bit: 0~31
	unsigned int hour:5;	// 5bit: 0~31
	unsigned int min:6;	// 6bit: 0~63
} schedule;

int main()
{
	schedule my;		// 구조체 변수 선언
	my.year = 2001;		// 비트필드에 값 저장
	my.month = 5;
	my.day = 28;
	my.hour = 12;
	my.min = 30;
	printf("%d년 %d월 %d일 %d시 %d분\n",
		my.year, my.month, my.day, my.hour, my.min); 
	printf("구조체의 크기 : %dByte\n", sizeof(schedule));
}
