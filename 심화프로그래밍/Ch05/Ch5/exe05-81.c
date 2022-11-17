#include <stdio.h>

main()
{
	unsigned int seconds, sec, min=0, hour=0;
	printf("계산할 초를 입력하시오: ");
	scanf("%d", &seconds);

	sec = seconds;
	for( ; sec>=60; sec-=60)
		min++;

	for( ; min>=60; min-=60)
		hour++;

	printf("%d초 = %02d시:%02d분:%02d초\n", seconds, hour, min, sec);
}

