#include <stdio.h>
int main()
{
	int day, date, month, year, y1, y2, y, m, d;
	int cal[6][7] = {0,}, row, col, temp;
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

	row = 0;
	while (d <= date) {	// 1일부터 마지막 날까지 배열에 저장한다. 
		cal[row][day%7]=d;
		d++;
		day++;	// 요일을 변화하는 변수 
		if(day%7==0)
			++row;
	}

	for(row=0; row<6; row++){
		for(col=0; col<7; col++){
			temp = cal[row][col];	// 저장된 값을 가져온다. 
			if(temp)	// 0이 아니면 날짜를 출력한다. 
				printf("%3d", temp);
			else		// 0이면 공백을 출력한다. 
				printf("%3s", "");
		}
		printf("\n");
	}
}
