#include <stdio.h>
int main()
{
	int x, product;
	for (x=1; ; x+=2) {
		product = x * (x+2) * (x+4);
		if ( product == 3315 ) {
			printf("%d*%d*%d=%d\n", x, x+2, x+4, product);
			break;
		}
	}
}
