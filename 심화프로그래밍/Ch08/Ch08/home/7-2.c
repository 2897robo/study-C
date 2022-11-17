#include <stdio.h>

int main(void)
{
	printf("20194487 ±è±â¿í\n");
	register int sum=0, i;
	for(i=0; i<1000; i++)
		sum += i;
	printf("sum=%d\n", sum);
}
