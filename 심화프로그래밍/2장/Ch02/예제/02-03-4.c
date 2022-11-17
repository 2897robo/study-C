#include <stdio.h>
int main()
{
	int x=10, y=3, z;
	x = x + y - (z = y);
	printf("x = %d\n", x);
	printf("z = %d\n", z);
	z = x++ + --y;
	printf("x++ + --y = %d\n", z);
}
