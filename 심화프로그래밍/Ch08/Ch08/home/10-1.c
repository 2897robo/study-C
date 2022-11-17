/* mktime example: weekday calculator */ 
#include <stdio.h>
#include <time.h>

int main ()
{
	printf("20194487 김기욱\n");
	time_t rawtime, user_time;
	struct tm * timeinfo;
	int year, month ,day;
	char * weekday[] = { "일요일", "월요일", "화요일", "수요일", "목요일", "금요일", "토요일"};
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	printf("오늘은 %d년 %d월 %d일 %s입니다\n", 1900+timeinfo->tm_year, 1+timeinfo->tm_mon,
			timeinfo->tm_mday, weekday[timeinfo->tm_wday]); 
	printf ( "%s", asctime(timeinfo) );
	printf ( "%s", asctime(gmtime(&rawtime )));
	printf ( "%s", ctime (&rawtime) ); // printf ( "%s", asctime(localtime(&rawtime)));

	/* 사용자가 지정하는 날짜를 입력받는다. */ 
	printf("\n년/월/일 : ");
	scanf("%d%*c%d%*c%d", &year, &month, &day); 

	/* 현재 시간을 얻어 사용자가 지정한 시간으로 바꾼다. */ 
	time ( &rawtime );
	timeinfo = localtime ( &rawtime );
	timeinfo->tm_year = year - 1900;	// 사용자가 입력한 년도를 지정한다.
	timeinfo->tm_mon = month - 1;		// 사용자자 입력한 월을 지정한다.
	timeinfo->tm_mday = day;			// 사용자가 입력한 일을 지정한다.

	/* mktime함수를 이용하여 시간을 새로 만든다. */  
	user_time = mktime ( timeinfo );
	printf ("%d년 %d월 %d일은 %s입니다.\n", year, month, day, weekday[timeinfo->tm_wday]);
}

/* time.h에 정의되어 있는 tm 구조체
struct tm 
{ 
	int	tm_sec;	-- 초: 0-59 (K&R says 0-61?) 
	int	tm_min;	-- 분: 0-59 
	int	tm_hour;	-- 24시간 표시 : 0-23 
	int	tm_mday;	-- 일 : 1-31 
	int	tm_mon;	-- 월 : january: 0-11  
	int	tm_year;	-- 년 : Years since 1900 
	int	tm_wday;	-- 요일 : Days since Sunday (0-6) 
	int	tm_yday;	-- 그 해의 1월 1일 부터 날자수 : 0-365 
	int	tm_isdst;	-- 썸머타임 적용 : +1 Daylight Savings Time, 0 No DST, -1 don't know 
}; 
*/ 
