#include<stdio.h>
 
int main()
{
	int n, c, k, space, count = 1;

	printf("열 수를 입력하시오: ");
	scanf("%d", &n);

	space = n;

	for ( c = 1 ; c <= n ; c++) {
		for( k = 1 ; k < space ; k++)
			printf(" ");

		for ( k = 1 ; k <= c ; k++) {
			printf("*");
		
			if ( c > 1 && count < c) {
				printf("A");
				count++;
			}
		}
		printf("\n");
		space--;
		count = 1;
	}
}
