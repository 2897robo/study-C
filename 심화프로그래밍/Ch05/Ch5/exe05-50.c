#include <stdio.h>

int main()
{
	int number, divider;

	for(number=1; number<=30; number++) {
		printf("%3dÀÇ ¾à¼ö : ", number); 
		for(divider=1; divider<=number; divider++)
			if( number % divider == 0 )
				printf("%3d ", divider);
		printf("\n");
	}
}
