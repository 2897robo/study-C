#include <stdio.h> 

int main()
{
	int x1, x2;
	printf("   ");
	for (x1=0; x1<16; x1++)
	         printf("%2d ", x1);
	printf("\n");
	for (x2=0; x2<16; x2++) {
		printf("%2d ", x2);
		for (x1=0; x1<16; x1++)
			printf("%02X ", x2*16+x1);
		printf("\n");
	}
}
