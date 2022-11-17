#include <stdio.h>
int main()
{
 	char c = 'A';
	int a=29, b=7;
	double x=5.3, y, z;
	c = 'A' + (char)32;
	printf("c=%c\n", c);
	y = (b/a) * x;
	z = ((double)b/a) * x;
	printf("y=%f, z=%f\n", y, z);
	y = (x/b) * a;
	z = ((int)x/b) * a;
	printf("y=%f, z=%f\n", y, z);
}
