/* difftime example */ 
#include <stdio.h>
#include <time.h>

int main ()
{
	time_t start, end;
	char name[256];
	double diff;

	time (&start);
	printf ("당신의 이름을 입력하시오: ");
	gets (name);
	time (&end);
	diff = difftime (end, start);
	printf ("안녕 %s.\n", name);
	printf ("당신의 이름을 입력하는데 %.2f초 걸렸습니다.\n", diff );
	return 0;
}
