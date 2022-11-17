#include <stdio.h>

int main()
{
	int x=0, sum=0;

	while(x<100) {
		x++;
		sum += 2*x*x+5*x;
	}
	printf("sum = %d\n", sum);
}
