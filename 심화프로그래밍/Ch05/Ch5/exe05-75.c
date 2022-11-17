#include <stdio.h>

main()
{
	int i, j, n;
	printf("Enter the value of N:");
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		printf("\n%*s", n-1-i, "");
		for(j=0; j<2*i+1; j++)
			printf("*");
	}
}

