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

	strftime(buff, sizeof buff, "������ %Y�� %m�� %d�� %A", tmptr);
	puts(buff);
	
	tmptr->tm_mday --;
	mktime(tmptr);
	
	strftime(buff, sizeof buff, "������ %Y�� %m�� %d�� %A", tmptr);
	puts(buff);

	tmptr->tm_mday  += 2;
	mktime(tmptr);

	strftime(buff, sizeof buff, "������ %Y�� %m�� %d�� %A", tmptr);
	puts(buff);
	free(tmptr);
}
