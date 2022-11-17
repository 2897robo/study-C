#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("20194487 ±è±â¿í\n");
	int *a;
	char buffer[35];
	double *b;
	b=(double *)malloc(sizeof(double));
	*b = 0.625;
	a = (int *)b;		
	a++;			 
	itoa(*a, buffer, 2);
	printf("%032s", buffer);
	a--;
	itoa(*a, buffer, 2);
	printf("%032s", buffer);
	free(b);
}
