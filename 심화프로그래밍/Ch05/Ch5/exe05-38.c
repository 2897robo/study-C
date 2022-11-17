#include <stdio.h> 

int main()
{
	long a, number;

	for(a=11; a<100; a++) { 
		number = a*(a+2)*(a+4); 
		if(number/100000 == 4 && number%10 ==2) 
			printf("%d * %d * %d = %d\n", a, a+2, a+4, number); 
	}
}
