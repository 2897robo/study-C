#include <stdio.h>

main()
{
	unsigned int seconds, sec, min=0, hour=0;
	printf("����� �ʸ� �Է��Ͻÿ�: ");
	scanf("%d", &seconds);

	sec = seconds;
	for( ; sec>=60; sec-=60)
		min++;

	for( ; min>=60; min-=60)
		hour++;

	printf("%d�� = %02d��:%02d��:%02d��\n", seconds, hour, min, sec);
}

