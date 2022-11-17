#include <stdio.h>
int main()
{
	int x=1, sign=-1, sum=0;

	while (x<=100) {
		sum += sign * x * x;
		x++;
		sign = -sign;
	}
	printf("sum = %d\n", sum);
}
