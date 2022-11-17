#include <stdio.h>
int main()
{
	printf("20194487 ±è±â¿í");
	int i, j, x[] = {5, 5, 3, 4, 6, 8, 10, 1, 2, 3}; 
	int max_count = sizeof(x)/sizeof(x[0]); //°³¼ö ÆÄ¾Ç

	for (i = 0; i < max_count; i++) { 
		printf("%2d : ", x[i]); 
		for (j=0; j < x[i]; j++) 
			printf("%c", '*'); 
		printf("\n"); 
	}
}
