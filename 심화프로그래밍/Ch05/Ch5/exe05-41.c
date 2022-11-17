#include <stdio.h> 

int main()
{
	int x, even_sum=0, odd_sum=0;
	for(x=1; x<=100; x+=2) {
		even_sum += x+1;
		odd_sum += x;
	}
	printf("Â¦¼öÀÇ ÇÕ = %d, È¦¼öÀÇ ÇÕ=%d\n", even_sum, odd_sum);
} 
