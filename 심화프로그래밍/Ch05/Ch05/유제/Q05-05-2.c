#include <stdio.h>
int main()
{
	int x=1;
	double sum=0.0, sign;
	for (x=1; x<=10000; x++) {
		if (x%3)
			sign = 1.0;
  		else
  			sign = -1.0;
		sum += sign * 1.0/x;
	}
	printf("sum = %f\n", sum);
}
