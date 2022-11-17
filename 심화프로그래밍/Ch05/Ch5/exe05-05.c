#include <stdio.h>

int main()
{
	int x=1, sum=0, sign=-1;
	while(x<=100){
		sum += sign*x*x;
		x++;
		sign = -sign;
	}

	printf("SUM = %d\n", sum);
}
