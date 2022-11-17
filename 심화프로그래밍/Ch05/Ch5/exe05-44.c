#include <stdio.h>

int main()
{
	int a, number;
	for(a=0; a<9; a++){
		number = 4102 + a * 10;
		if ( number % 3 == 0 && number % 4 == 0)	// if ( number%12 == 0 ) 
			printf(" %d \n", number);
	}
}
