#include <stdio.h>
int main()
{
	printf("20194487 김기욱");

	int day, date, month, year, leaf, y1, y2, y, m, d, i=0;
	do { 
		printf("년-월을 입력하시오 : ");
		scanf("%d%*c%d", &year, &month); 
		if (year <1584 || month < 1 || month > 12) { 
			printf("년도 또는 월이 잘못 입력되었습니다.\n"); 
			continue;
		}
		break;
	} while (1);
	y = year;
	m = month;
	d = 1;
	if (m < 3) {
		y--;
		m += 12;
	}

	y1 = y/100;
	y2 = y%100;

	// Zeller의 공식
	day = (21*y1/4) + (5*y2/4) + (26*(m+1)/10) + d - 1;
	day %= 7;
	if( month==4 || month==6 || month==9 || month==11)
		date = 30;
	else if( month == 2) {
		if( year%4 || (year%100==0 && year%400!=0))
			date = 28;
		else 
			date = 29;
	}
	else 
		date = 31;

	printf("\n\n%10d년 %d월\n\n", year, month); 

	printf(" 일 월 화 수 목 금 토\n");
	printf("---------------------\n");

	printf("%*s", day*3, "");
	// 처음 1일이 시작되기 전의 공백을 출력한다. 
	while (d <= date) {	// 1일부터 마지막 날까지 출력한다. 
		while (day < 7) {
			printf("%3d", d++);
			day++;
			if (d > date)
				break;
		}
		printf("\n");
		day = 0;
	}
}
