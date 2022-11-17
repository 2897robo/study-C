#include <stdio.h>

int main()
{
	int x=1, sum=0;

	while(1) {
		sum += x*x;
		if( sum > 5000) {
			printf("x = %d, sum = %d\n", x, sum);
			break;
		}
		x++;
	}
}
