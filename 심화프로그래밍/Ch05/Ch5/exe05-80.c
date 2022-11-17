#include <stdio.h>

main()
{
	unsigned int n, power=0;
	printf("Enter the value of N:");
	scanf("%d", &n);

	printf("%d >= ", n);
	for(; n>1; n/=2)	// for(; n>1; n>>=1) 
		power++;

	printf("2**%d\n", power);
}
