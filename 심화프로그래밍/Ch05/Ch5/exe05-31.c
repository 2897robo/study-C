#include <stdio.h> 

int main()
{
	int day, date, month, year, leaf, y1, y2, y, m, d;
	char week[][3] = {"일","월","화","수","목","금","토"};
	//한글은 2바이트이기 때문에 2차원 배열 사용 

	do { 	// 정상적인 데이터가 입력되었는지 검사하는 루프 
		printf("년-월-일을 입력하시오 : ");
		scanf("%d%*c%d%*c%d", &year, &month, &date); 
		if (year <1583 || month < 1 || month > 12) { 
			printf("년도 또는 월이 잘못 입력되었습니다.\n"); 
			continue; 
		}
		if(date < 1 || date >31) {
			 printf("날짜가 음수이거나 31보다 큽니다.\n"); 
			 continue; 
		} else if( (month == 4 || month == 6 || month == 9 || month == 11) && date > 30) {
			 printf("날짜가 30보다 큽니다.\n"); 
			continue;
		} else if( month == 2 ) {
			leaf = (year%400 == 0) || (year%100 != 0 && year%4 ==0);
			if( (leaf && date > 29) || (!leaf && date > 28)) {
				 printf("날짜가 28 또는 29보다 큽니다.\n"); 
				continue;
			}
		}
		break;
	} while (1);

	y = year;
	m = month;
	d = date;
	if (m < 3) { // 월이 1, 2월이면 전년도의 13, 14월로 계산한다. 
		y--;
		m += 12;
	}

	y1 = y/100;
	y2 = y%100;

	day = (21*y1/4) + (5*y2/4) + (26*(m+1)/10) + d - 1;
	day %= 7;

	printf("%d년 %d월 %d일은 %s요일입니다.\n", year, month, date, week[day]);
}
