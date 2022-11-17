#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	unsigned int i, seed;
	seed = time(0);
	srand(seed);
	for( i=0; i<100; i++)
		printf("%c ", rand()%26+'a');
}
