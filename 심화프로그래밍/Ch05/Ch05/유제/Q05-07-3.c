#include <stdio.h>
int main()
{
	int i, j, k, l, b, n;
	do {
		printf("Enter the value of N(From 1 to 10):");
		scanf("%d",&n);
	} while ( n > 10 || n < 0);
	for (i=0;i<n;i++) {
		printf("\n%*s", i, "");
		for (j=i+1;j<=n;j++)
			printf("%d",j);
		for (k=n-1;k>i;k--)
			printf("%d",k);
	}
	b=n-1;
	for (i=0;i<n-1;i++) {
		printf("\n%*s", n-i-2, "");
		for (j=b;j<=n;j++)
			printf("%d",j);
		for (k=n-1;k>=b;k--)
			printf("%d",k);
		b--;
	}
}
