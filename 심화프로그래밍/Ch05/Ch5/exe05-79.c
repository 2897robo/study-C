#include <stdio.h>

main()
{
	unsigned int i, n, power=1;
	printf("Enter the value of N:");
	scanf("%d", &n);

	for(i=0; i<n; i++)
		power *= 2;	// power <<= 1; 

	printf("2**%d = %d\n", n, power);
}
