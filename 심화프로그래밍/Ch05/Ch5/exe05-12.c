#include <stdio.h>
//#include <math.h>

int main()
{
	int n=0, sum=0;

	do {
		n += 2;
		sum += n*n;
	} while(sum<=5000);
	printf("%d, %d\n", n, sum);
}
