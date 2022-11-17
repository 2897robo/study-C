#include <stdio.h>

main()
{
	char i, j;
	for(i='A'; i<='Z';i++) {
		for(j=i; j<='Z'; j++)
			printf("%c ", j);		// printf("%c ", i); 
		printf("\n");
	}
}
