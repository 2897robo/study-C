#include <stdio.h>

int main()
{
 	char i, j;
 	for(i='A'; i<='Z'; i++) {
		printf(" ");
		for(j='A'; j<=i; j++)
			printf("%c", j);
		printf("\n");
	}
}
