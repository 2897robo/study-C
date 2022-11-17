#include <stdio.h>
int main()
{
	int n=100;

	while(n > 0) {
		printf("%3d", n);
		if( n%10 == 1)
			printf("\n");
		else
			printf("\t");
		n--;
	}
}
