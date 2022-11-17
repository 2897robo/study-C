#include <stdio.h>

int main()
{
	int a, b, number;
	for(a=10000; a<90000; a+=10000){
		for(b=0; b<9; b++) {
			number = a + 6790 + b;	// a679b 
			if ( number % 72 == 0 )		// 72·Î ³ª´²Áö¸é 
				printf(" %d / 72 = %d\n", number, number/72);
		}
	}
}
