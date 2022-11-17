#include <stdio.h>
int main()
{
	int n=1, count=0;

	while(n <= 100) {
		if( n%2 == 0 || n%3 == 0) {
			printf("%3d ", n);
			count++;
			if(count%10 == 0)
				printf("\n");
		}
		n++;
	}
}
