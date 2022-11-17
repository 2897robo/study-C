#include <stdio.h>
int main()
{
	int x=1, product;
	do {
		product = x * (x+2) * (x+4);
		if ( product == 3315 ) {
			printf("%d*%d*%d=%d\n", x, x+2, x+4, product);
			break;
		}
		x+=2;
	} while (1);
}
