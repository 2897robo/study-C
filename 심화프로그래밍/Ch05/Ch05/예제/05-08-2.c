#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	unsigned int i, seed, sum=0;
	double average=0;
	seed = time(0);
	srand(seed);
	
	for ( i=0; i<1000; i++)
		sum += rand()%6+1;		// 1부터 6까지 난수 발생
	printf("눈의 평균 = %f\n", sum/1000.0);
}
