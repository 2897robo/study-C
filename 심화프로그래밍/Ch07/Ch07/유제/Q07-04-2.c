#include <stdio.h>
int main()
{
	printf("20194487 김기욱\n");
	int day, date, month, year, leaf, y1, y2, y, m, d, i=0;
	int cal[6][7] = {0,}, row, col, *cp;
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

	cp = (int *)cal;
	cp += day;
	while (d <= date)	// 1일부터 마지막 날까지 배열에 저장한다.
		*(cp++) = d++;

	cp = (int *)cal;	// 배열의 시작주소를 포인터에 저장한다.
	day = 0;		// 처음 요일은 일요일부터 시작한다.
	while(*cp <= date) {
		if(*cp)		// 0이 아니면 날짜를 출력한다.
			printf("%3d", *cp);
		else		// 0이면 공백을 출력한다.
			printf("%3s", "");
		cp++;		// 배열의 포인터 위치를 증가한다.
		day++;		// 요일이 증가한다.
		if(day % 7 == 0)
			printf("\n");
	}
}
