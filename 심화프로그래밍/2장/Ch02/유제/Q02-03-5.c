#include <stdio.h>
main()
{
	int year=365, week, days;
	week = year / 7;
	days = year % 7;
	printf("1��(%d��)�� %d�� %d��\n", year, week, days);
}
