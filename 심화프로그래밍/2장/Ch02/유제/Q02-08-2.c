#include <stdio.h>
int main()
{
	int a=3, b=7;
	double x=12.3, y=34.5;
	printf("%d\n", a/b);
	printf("%f\n", (double)a/b);
	printf("%d\n\n", (double)a/b);
	printf("%f\n", x*y);
	printf("%f\n", y/x);
	printf("%f\n", (int)y/x);
	printf("%d\n", (int)y/(int)x);
	printf("%d\n", (int)y/x);
}
