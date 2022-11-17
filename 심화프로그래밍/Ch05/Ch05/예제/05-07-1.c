#include <stdio.h>
int main()
{
	int dan, y;
	for(dan=2; dan < 10; dan++) {
		printf("%7d´Ü\n", dan);
		for(y=1; y < 10; y++)
			printf(" %2d * %2d = %2d\n", dan, y, dan*y);
		printf("\n\n");
	}
}
