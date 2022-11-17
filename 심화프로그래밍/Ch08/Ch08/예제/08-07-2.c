#include <stdio.h>

int main(void)
{
	register int sum=0, i;
	for(i=0; i<1000; i++)
		sum += i;
	printf("sum=%d\n", sum);
}
