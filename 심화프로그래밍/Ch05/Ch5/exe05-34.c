#include <stdio.h> 
#include <stdlib.h> 

int main()
{
	int number;
	char str[100];

	printf("DEC, OCT, HEX, BIN\n");
	for(number = 0; number < 256; number++) {
		itoa(number, str, 2);
		printf("%03d, %03o, %03X, %08s\n", number, number, number, str);
	}
}
