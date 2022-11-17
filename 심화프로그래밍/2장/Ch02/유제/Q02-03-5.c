#include <stdio.h>
main()
{
	int year=365, week, days;
	week = year / 7;
	days = year % 7;
	printf("1년(%d일)은 %d주 %d일\n", year, week, days);
}
