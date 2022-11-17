#include <stdio.h>
int add_digits(int);

int main()
{
	int n, sum_digits;
	scanf("%d", &n);
	sum_digits = add_digits(n);
	printf("%d\n", sum_digits);
}
 
int add_digits(int n) {
	if (n == 0) {
		return 0;
	}
	return( n%10 + add_digits(n/10) );
}
