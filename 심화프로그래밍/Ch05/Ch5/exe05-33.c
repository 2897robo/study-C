#include <stdio.h>

int main()
{
	unsigned int bp=1, x;
	for(x=0; x<32; x++, bp <<= 1)
		printf("2�� %2d���� = %12u\n", x, bp);
}
