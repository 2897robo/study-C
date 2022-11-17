#include <stdio.h>
void gregorian(int, int, int);
int valid_date(int, int, int);
void one_month_cal(int, int);
int last_day(int, int); 	// 전역 변수 선언
char day[][4]={"일", "월", "화", "수", "목", "금", "토"};

int main()
{
	printf("20194487 김기욱\n");
	int year, month, date;
	printf("그레고리력은 1582년 10월 15일 이후부터 계산이 가능합니다.\n");

	while(1) {
		printf("\n연도를 입력하시오(0:exit) : ");
		scanf("%d", &year);

		if( year <= 0) {		// 년도가 0 또는 음수이면 끝낸다. 
			printf("Bye...\n");
			break;
		}
		printf("월을 입력하시오 : ");
		scanf("%d", &month);
		printf("일을 입력하시오 : ");
		scanf("%d", &date);

		if( !valid_date(year, month, date) ) { // 입력된 날짜 검사 
			printf("날자가 잘못 입력되었으므로 다시 ");
			printf("입력하여주시기 바랍니다.\n");
			continue;
		}
		printf("\n\n");

		// 그레고리력인지 검사 
		if( year > 1582 || (year == 1582 && month > 10 ) || 
			(year == 1582 && month == 10 && date >= 15) )
			gregorian(year, month, date);
		else if( year < 1582 || (year == 1582 && month < 10 )
			|| (year == 1582 && month == 10 && date < 15) ) {
			printf("이 날자는 그레고리력에는 없는 날입니다.\n");
			continue;
		}
		one_month_cal(year, month);	// 1개월 달력을 출력한다. 
	}
}

/*몇 년, 몇 월, 몇 일이 무슨 요일인지 검사하는 함수 */ 
void gregorian(int y, int m, int d) { /* 그레고리력 계산, y:년, m:월, d:일 */ 
	int a, c, weekday; 
	/* a:임시년도, c: 임시월, weekday: 요일계산용 변수 */ 
	c = m;
	a = y;
	if( m == 1 || m == 2 ) { 	/* 1월과 2월은 전년도의 13월과 14월이 된다. */ 
		c+= 12;
		a -= 1;
	}
	/* Zeller의 공식을 이용하여 무슨 요일인지 구한다. */ 
	weekday = (21 * ( a/100))/4 + (5 * (a %100)) /4 + (26 * ( c+1))/10 + d - 1;
	printf("%d년 %d월 %d일은 %s요일입니다.\n\n", y, m, d, day[weekday%7]);
	return;
	/* 돌려줄 값이 없을 때는 return만 쓰거나 return이 없어도 된다.*/ 
}

/* 한 달을 계산하여 출력하는 함수로서 return이 없고 다만 화면에 출력만 하는 함수 */ 
void one_month_cal(int y, int m) { /* y: 년, m:월 */ 
	int i, j=0, a, c, weekday, lastday; 
	/* a:임시년도, c:임시월, weekday:요일계산용 변수 */ 
	a=y;
	c=m;
	if ( m == 1 || m ==2 ) {
		a -= 1;
		c += 12;
	}

	/* Zeller의 함수를 이용 매월 1일이 무슨 요일인지 계산 */ 
	weekday = (21*(a/100))/4 + (5*(a%100))/4 + (26*(c+1))/10;
	weekday %= 7; /* 7로 나눈 나머지로 요일을 계산 */ 
	printf("%14d년 %d월\n\n", y, m);

	for(i=0; i<7; i++)
		printf("%4s", day[i]);
	printf("\n");

	/* 매월 1일이 무슨 요일인지 알고, 앞에 몇 칸을 띄워야 할지 계산 */ 
	for(i=0; i < weekday; i++, j++)
		printf("%4s", "");

	/* 한 줄에 토요일까지 인쇄하고 다음 줄로 건너가서 계속 인쇄 */ 
	lastday = last_day(y, m);
	for(i=1; i<=lastday; i++) {
		j++;
		printf("%4d", i);
		if(j==7) {
			printf("\n");
			j=0;
		}
	}
	printf("\n");
}

/* 어떤 달의 마지막이 며칠인지 계산 */ 
int last_day(int y, int m) /* y:년, m:월 */ 
{
	int dates_per_month[] = {29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(m==2 && (y%400 == 0 || (y%100 != 0 && y%4 == 0)))
		m = 0;
	return( dates_per_month[m] );
}

/* 정확한 년, 월, 일이 입력되었는지 검사 */ 
int valid_date(int y, int m, int d) /* y:년, m:월, d:일 */ 
{
	if( m < 1 || m > 12 || d < 1 || d > 31 )
		return(0);
	if(m == 2) {
		if( (y%400==0 || (y%100!=0 && y%4==0)) && d <= 29)
			return(1);
		else if( !(y%400==0 || (y%100!=0 && y%4==0) ) && d<=28)
			return(1);
		else 
			return(0);
	}
	else {
		if( (m==4 || m==6 || m==9 || m==11) && d<=30 )
			return(1);
		else if( ( m==1 || m==3 || m==5 || m==7 ||
			m==8 || m==10 || m==12 ) && d<=31 )
			return(1);
		else 
			return(0);
	}
}
