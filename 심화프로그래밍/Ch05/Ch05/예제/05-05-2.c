#include <stdio.h>
int main()
{
	int x, sum;
	for(x=1, sum=0; x<=10; x++)
		sum += x;
	printf("sum = %d\n", sum);
}
