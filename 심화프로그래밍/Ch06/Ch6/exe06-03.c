#include <stdio.h>
#include <math.h>

int main()
{
	int day1, mon1, year1, day2, mon2, year2;
	int dd1, dd2, i;
	int month_day[] = {0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int dates[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	printf("생년월일 입력(년, 월 일): ");
	scanf("%d%*c%d%*c%d", &year1, &mon1, &day1);
	printf("오늘 날짜 입력(년, 월 일): ");
	scanf("%d%*c%d%*c%d", &year2, &mon2, &day2);

	// 태어난 해의 일 수 계산 
	dd1 = 365 - dates[mon1] - day1 + 1;
	if( year1 % 400 == 0 || (year1 % 100 != 0 && year1 % 4 == 0 ) ) {
		if(mon1 == 1 || ( mon1 == 2 && day1 < 29) )	// 생년이 윤년이고 2월 이전이면 
			dd1 += 1;		// 1일 더함 
	}

	// 태어난 다음 해부터 작년 12월 31일까지 계산 
	if(year2 - year1 > 1)
		dd1 = dd1 + (year2 - year1 - 1) * 365;
	// 해마다 윤년을 찾아 하루씩 더함 
	for(i=year1+1; i<year2; i++) {
		if( i % 400 == 0 || (i % 100 != 0 && i % 4 == 0 ) ){
			dd1 ++;
		}
	}

	// 올해의 오늘까지 계산 
	dd2 = dates[mon2] + day2;
	if( year2 % 400 == 0 || (year2 % 100 != 0 && year2 % 4 == 0 ) ) {
		if( mon2 > 2) 	// 올해가 윤년이고 2월 이후면 1을 더함. 
			dd2 ++;
	}
	printf("오늘 까지 일 수는 %d일\n", dd1+dd2);
}
