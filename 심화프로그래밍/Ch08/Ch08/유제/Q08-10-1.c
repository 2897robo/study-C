#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	char buff[100];
	time_t t=time(0), k;
	struct tm *NowPtr = (struct tm*)calloc(1, sizeof(struct tm));

	NowPtr = localtime(&t);	// localtime_s(tmptr, &t);

	setlocale(LC_TIME, "");

	strftime(buff, sizeof buff, "������ %Y�� %m�� %d�� %A�Դϴ�.", NowPtr);
	puts(buff);

	struct tm *BirthPtr = (struct tm*)calloc(1, sizeof(struct tm));
	int m, d;
	printf("\n%������ �Է��ϼ���(MM/DD) : ");
	scanf("%d%*c%d", &m, &d);

	if(NowPtr->tm_mon + 1 == m && NowPtr->tm_mday == d ) {
		printf("���� �����մϴ�. ������ �����̽ñ���.\n");
		return 1;
	}
	else if(NowPtr->tm_mon +1 > m) {
		BirthPtr->tm_year = NowPtr->tm_year + 1;
 	}
	else
		BirthPtr->tm_year = NowPtr->tm_year;

	BirthPtr->tm_mon = m-1;
	BirthPtr->tm_mday = d;
	BirthPtr->tm_hour = 0;
	BirthPtr->tm_min = 0;
	BirthPtr->tm_sec = 0;
	k = mktime(BirthPtr);

	strftime(buff, sizeof buff, "%Y�� %m�� %d�� %A", BirthPtr);
	printf("\n%s\n", buff);

	int h, t_day;
	h = difftime(k, t);
	t_day = h / (24*3600);
	printf("%d�� ���ҽ��ϴ�.\n", t_day+1);

	free(NowPtr);
	free(BirthPtr);
}
