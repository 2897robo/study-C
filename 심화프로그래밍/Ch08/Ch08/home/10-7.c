#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	printf("20194487 김기욱\n");
	char buff[100];
	time_t t=time(0), k;
	struct tm *tmptr = (struct tm*)calloc(1, sizeof(struct tm));

	tmptr = localtime(&t);	// localtime_s(tmptr, &t);

	setlocale(LC_TIME, "");

	strftime(buff, sizeof buff, "오늘은 %Y년 %m월 %d일 %A", tmptr);
	puts(buff);
	
	tmptr->tm_mday += 100;
	mktime(tmptr);
	
	strftime(buff, sizeof buff, "100일째 되는 날은 %Y년 %m월 %d일 %A", tmptr);
	puts(buff);

	printf("\n현재 : %d\n", t);
	tmptr->tm_year = 137;	// 2037년 
	tmptr->tm_mon = 11;		// +1=5월 
	tmptr->tm_mday = 25;	// 27일 
	tmptr->tm_hour = 17;	// 17시 
	tmptr->tm_min = 50;		// 50분 
	tmptr->tm_sec = 0;

	strftime(buff, sizeof buff, "%Y년 %m월 %d일 %A", tmptr);
	k = mktime(tmptr);
	printf("%s : %d\n", buff, k);
	free(tmptr);
}
// 1970.1.1일부터 0초에서 카운터 시작, 2038년이면 문제 발생함. 
