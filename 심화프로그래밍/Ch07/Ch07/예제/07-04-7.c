#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define TRUE 1
#define FALSE 0
int main()
{
	char *sieve; /* the sieve:ü(�Ÿ���) */
	char *sp, *tp;
	int number; // ��ġ�� ��Ÿ���� ������ 

	sieve = (char *) malloc(SIZE);
	// Set the entire sieve to TRUE.
	for( sp = sieve; sp < sieve + SIZE; )
		*sp++ = TRUE;

	*sieve = *(sieve+1) = FALSE;

	for( number = 0, tp = sieve; tp < sieve+SIZE; tp++, number++){
		while(*tp == FALSE) { // FALSE�� ����� ���� �׳� ��������. 
			tp++;
			number++;
		}		// TRUE�̸� ����� �۾��Ѵ�. 

		sp = tp; 	// ������ ��ġ�� sp�� �����ϰ� �۾��� �����Ѵ�. 
		
		// TRUE(������ġ)�� ����� �Ǵ� ���� ��� FALSE�� �����. 
		while( sp += number, sp < sieve + SIZE )
			*sp = FALSE;
	}

	// TRUE�� ����� ���� ��ġ�� ����Ѵ�. 
	for( number = 0, sp = sieve; sp < sieve + SIZE; number++, sp++ ){
		if( *sp )
			printf( "%4d ", number );
	}
	free(sieve);
}
