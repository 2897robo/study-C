#include <stdio.h>

int main()
{
	int number, divider, count;

	for(number=1; number<=10; number++) {
		count = 0;
		printf("%3d의 약수 : ", number);
		for(divider=1; divider<=number; divider++)
			if( number % divider == 0 ) {
				printf("%3d ", divider);
				count++;
			} 
		if(count == 2) // 약수의 개수가 2개이면 소수 
			printf("==> 소수");
		printf("\n");
	}
}
