#include <stdio.h>

int main()
{
	int x, y;
	double apery=0.0;

	for(x = 1; x < 1000; x++)
		apery += 1.0/(double)(x*x*x);
	printf("Apery's constant = %f\n", apery);
}
