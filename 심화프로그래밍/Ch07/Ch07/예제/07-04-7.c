#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define TRUE 1
#define FALSE 0
int main()
{
	char *sieve; /* the sieve:체(거름망) */
	char *sp, *tp;
	int number; // 위치를 나타내는 정수값 

	sieve = (char *) malloc(SIZE);
	// Set the entire sieve to TRUE.
	for( sp = sieve; sp < sieve + SIZE; )
		*sp++ = TRUE;

	*sieve = *(sieve+1) = FALSE;

	for( number = 0, tp = sieve; tp < sieve+SIZE; tp++, number++){
		while(*tp == FALSE) { // FALSE가 저장된 곳은 그냥 지나간다. 
			tp++;
			number++;
		}		// TRUE이면 벗어나서 작업한다. 

		sp = tp; 	// 현재의 위치를 sp에 저장하고 작업을 시작한다. 
		
		// TRUE(현재위치)의 배수가 되는 곳은 모두 FALSE로 만든다. 
		while( sp += number, sp < sieve + SIZE )
			*sp = FALSE;
	}

	// TRUE가 저장된 곳의 위치를 출력한다. 
	for( number = 0, sp = sieve; sp < sieve + SIZE; number++, sp++ ){
		if( *sp )
			printf( "%4d ", number );
	}
	free(sieve);
}
