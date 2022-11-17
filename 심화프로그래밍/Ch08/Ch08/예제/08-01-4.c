#include <stdio.h>
int sum_of_exact_divisor(int);
int is_friendly_no(int, int);

int main()
{
	int i, j;
	for(i=1; i<1000; i++)
		for(j=i+1; j<1000; j++)
			if(is_friendly_no(i,j))
				printf("%d, %d는 친화수이다.\n", i, j); 
} 

int sum_of_exact_divisor(int x)
{
	int i, sum=0;
	for(i=1; i<=x/2; i++)
		if(x % i == 0)
			sum += i;
	return sum;
}

int is_friendly_no(int x, int y)
{
	int sum1, sum2;
	sum1 = sum_of_exact_divisor(x);
	sum2 = sum_of_exact_divisor(y);
	if( sum1 == y && sum2 == x)
		return 1;
	else 
		return 0;
}
