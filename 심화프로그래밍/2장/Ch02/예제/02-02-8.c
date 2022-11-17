#include <stdio.h>
int main()
{
	int x=5;
	double y=10.0;
	printf("%d, %d\n", sizeof x, sizeof y);
	printf("size of constant: %d\n", sizeof 2);
}
