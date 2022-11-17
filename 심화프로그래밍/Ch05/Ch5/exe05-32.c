#include <stdio.h>

int main()
{
	int i, sum=0;

	for(i=0; i<=100; i++)
		if(i & 1)
			sum += i;
		printf("sum = %d\n", sum);
}

/*
#include <stdio.h>

int main()
{
	int i, sum=0;

	for(i=0; i<=100; i++)
		sum += (i&1) ? i : 0;
	printf("sum = %d\n", sum);
}
*/


/*
#include <stdio.h>

int main()
{
	int i, odd_sum=0, even_sum=0;

	for(i=0; i<=100; i++)
		(i&1) ? (odd_sum+=i) : (even_sum+=i);
	printf("È¦¼ö ÇÕ = %d, Â¦¼ö ÇÕ = %d\n", odd_sum, even_sum);
}
*/
