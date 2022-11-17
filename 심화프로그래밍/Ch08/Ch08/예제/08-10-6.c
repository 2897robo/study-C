/* difftime example */ 
#include <stdio.h>
#include <time.h>

int main ()
{
	time_t start, end;
	char name[256];
	double diff;
	clock_t t1, t2;
	t1 = clock();		// 처음 시간 구하기 
	time (&start);
	printf ("당신의 이름을 입력하시오: ");
	gets (name);
	time (&end);
	diff = difftime (end, start);
	printf ("안녕 %s!\n", name);
	printf ("당신의 이름을 입력하는데 %.2lf초 걸렸습니다.\n", diff );

	t2 = clock() - t1;		// 나중시간 구해서 빼기 
	printf ("%.2f ms\n", (double)t2 / CLOCKS_PER_SEC);
	printf("%ld, %ld, %ld\n", t1, t2, CLOCKS_PER_SEC);
	return 0;
}
