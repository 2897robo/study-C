#include <stdio.h>

main()
{
	int i, j, n;
	printf("Enter the value of N:");
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("%*s", n-1-i, "");
		for(j=0; j<=i; j++)
			printf("*");
		printf("\n");
	}
}
