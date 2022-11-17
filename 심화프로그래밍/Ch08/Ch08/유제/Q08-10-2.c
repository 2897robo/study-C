#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	char buff[100];
	time_t t=time(0), k;
	struct tm *tmptr = (struct tm*)calloc(1, sizeof(struct tm));

	tmptr = localtime(&t);	// localtime_s(tmptr, &t);

	setlocale(LC_TIME, "");

	strftime(buff, sizeof buff, "오늘은 %Y년 %m월 %d일 %A", tmptr);
	puts(buff);
	
	tmptr->tm_mday --;
	mktime(tmptr);
	
	strftime(buff, sizeof buff, "어제는 %Y년 %m월 %d일 %A", tmptr);
	puts(buff);

	tmptr->tm_mday  += 2;
	mktime(tmptr);

	strftime(buff, sizeof buff, "내일은 %Y년 %m월 %d일 %A", tmptr);
	puts(buff);
	free(tmptr);
}
