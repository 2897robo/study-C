#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	unsigned int i, seed, sum=0;
	seed = time(0);
	srand(seed);
	for ( i=0; i<100; i++)
		printf("%c ", rand()%26+65);	//´ë¹®ÀÚ A:65
}
