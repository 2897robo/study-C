#include <stdio.h>
int main()
{
	int x=10, y=3;
	x = x + y - (y = x);
	printf("x = %d\n", x);
	printf("y = %d\n", y);
}
