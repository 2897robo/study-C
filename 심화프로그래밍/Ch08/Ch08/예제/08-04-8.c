#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
void dec2bin(int, char *);

int main()
{
	int x = 298420394;
	char *binary;

	binary = malloc(40);		// 넉넉하게 40자리 
	dec2bin(x, binary);
	printf("%15d = %s\n", x, binary);

	x = INT_MAX;
	dec2bin(x, binary);
	printf("%15d = %s\n", x, binary);
	free(binary);
}

void dec2bin(int x, char *a) {
	int i;
	strcpy(a, "");
	// MSB부터 한자리씩 1인지 0인지 검사한다.
	for(i=0; i < 32; i++, x<<=1)
		(INT_MIN & x) ? strcat(a,"1") : strcat(a,"0"); 	// 문자열에 하나씩 추가한다. 
}
