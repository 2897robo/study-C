#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	printf("20194487 ����\n");
	char buff[100];
	time_t t=time(0), k;
	struct tm *tmptr = (struct tm*)calloc(1, sizeof(struct tm));

	tmptr = localtime(&t);	// localtime_s(tmptr, &t);

	setlocale(LC_TIME, "");

	strftime(buff, sizeof buff, "������ %Y�� %m�� %d�� %A", tmptr);
	puts(buff);
	
	tmptr->tm_mday += 100;
	mktime(tmptr);
	
	strftime(buff, sizeof buff, "100��° �Ǵ� ���� %Y�� %m�� %d�� %A", tmptr);
	puts(buff);

	printf("\n���� : %d\n", t);
	tmptr->tm_year = 137;	// 2037�� 
	tmptr->tm_mon = 11;		// +1=5�� 
	tmptr->tm_mday = 25;	// 27�� 
	tmptr->tm_hour = 17;	// 17�� 
	tmptr->tm_min = 50;		// 50�� 
	tmptr->tm_sec = 0;

	strftime(buff, sizeof buff, "%Y�� %m�� %d�� %A", tmptr);
	k = mktime(tmptr);
	printf("%s : %d\n", buff, k);
	free(tmptr);
}
// 1970.1.1�Ϻ��� 0�ʿ��� ī���� ����, 2038���̸� ���� �߻���. 
