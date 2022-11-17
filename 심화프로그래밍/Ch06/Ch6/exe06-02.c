#include <stdio.h> 

int main()
{
	int y, m, d, cnt=0, i;
	int days[13]= { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };

	printf("오늘의 날짜는(YYYY/MM/DD)? ");
	scanf("%d%*c%d%*c%d", &y, &m, &d);

	for (i=1; i<m; i++)
		cnt+= days[i];

	if ( m > 2) {
		if ( y % 400 == 0 || ( y%100 != 0 && y% 4 == 0 ))
			cnt++;
	}
	cnt += d;
	printf("오늘은 %d번째 날입니다.\n", cnt);
}
