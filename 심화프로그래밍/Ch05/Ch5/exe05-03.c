#include <stdio.h>

int main()
{
	int x=0, power=1;

	while(x < 31) {
		printf("2�� %2d������ %d\n", x++, power); 
		power<<=1;
	}
}
