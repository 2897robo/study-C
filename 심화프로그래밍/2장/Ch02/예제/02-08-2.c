#include <stdio.h>
int main()
{
	int a=29, b=7, c;
	double x=5.3, y, z;
	y = (a/b) * x;
	z = ((double)a/(double)b) * x;
	printf("y=%f, z=%f\n", y, z);
	y = (a/x) * b;
	z = (a/(int)x) * b;
	printf("y=%f, z=%f\n", y, z);
}
