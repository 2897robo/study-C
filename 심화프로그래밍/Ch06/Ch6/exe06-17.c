#include <stdio.h>
#include <math.h>

int main()
{
	int day1, mon1, year1, day2, mon2, year2;
	int ref, dd1, dd2, i;
	int dates[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	printf("시작 날짜 입력(년, 월 일): ");
	scanf("%d%*c%d%*c%d", &year1, &mon1, &day1);
	printf("마지막 날짜 입력(년, 월 일): ");
	scanf("%d%*c%d%*c%d", &year2, &mon2, &day2);

	ref = year1;
	if(year2 < year1)
		ref = year2;

	dd1 = 0;
	dd1 = dates[mon1];
	for(i=ref; i<year1; i++) {
		if(i%4 == 0)
			dd1 += 1;
	}

	dd1 = dd1 + day1 + (year1 - ref) * 365;
	printf("%d년 1월 1일부터 입력한 날까지 %d일\n", year1, dd1);
	/* Count for additional days due to leap years*/ 
	dd2=0;
	for(i=ref; i<year2; i++) {
		if(i%4 == 0)
			dd2 += 1;
	}
	dd2 = dates[mon2] + dd2 + day2 + ((year2-ref) * 365);
	printf("%d년 1월 1일부터 입력한 날까지 %d일\n", year2, dd2);
	printf("두 날짜 사이의 일 수는 %d일\n", abs(dd2-dd1));
}
