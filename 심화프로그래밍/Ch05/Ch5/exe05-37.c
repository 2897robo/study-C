#include <stdio.h>

int main()
{
	int i;
	printf("\n ASCII ÄÚµå °ª\n");

	for(i=0; i<4; i++)
		printf("%7s %3s %3s Ch", "Dec", "Hex", "Oct");
	for(i=0x20; i<0x80; i++) {
		if( (i%4) == 0)
			printf("\n");
		printf("%7d %3x %3o %2c", i, i, i, i);
	}
	printf("\n");
}
