#include <stdio.h>

int last_day(int, int);	// 함수 원형

int main()
{
	int year, month;		 // 함수의 지역변수

	printf("년, 월을 입력하시오(2011-4)"); 
	scanf("%d%*c%d", &year, &month); 

	printf("%d년 %d월의 말일은 %d일입니다.\n",
		year, month, last_day(year, month) );	// 함수 호출
}

int last_day(int y, int m)
{
	int dates_per_month[] = {29, 31, 28, 31, 30, 31,
				30, 31, 31, 30, 31, 30, 31}; // 지역 변수

	// 2월이고 윤년이면 29를 반환하기 위하여 m을 0으로 한다.
	if(m==2 && (y%400 == 0 || (y%100 != 0 && y%4 == 0)))
		m = 0;	
	return( dates_per_month[m] );	// 월에 해당하는 날짜를 반환한다. 
}
