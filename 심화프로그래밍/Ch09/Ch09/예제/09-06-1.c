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
	schedule my;		// ����ü ���� ����
	my.year = 2001;		// ��Ʈ�ʵ忡 �� ����
	my.month = 5;
	my.day = 28;
	my.hour = 12;
	my.min = 30;
	printf("%d�� %d�� %d�� %d�� %d��\n",
		my.year, my.month, my.day, my.hour, my.min); 
	printf("����ü�� ũ�� : %dByte\n", sizeof(schedule));
}
