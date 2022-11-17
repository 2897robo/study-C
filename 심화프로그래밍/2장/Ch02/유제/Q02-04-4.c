#include <stdio.h>
int main()
{
 	int first_number=1, common_difference=2, n=50, sum;
 	sum = n*(2*first_number + (n-1)*common_difference)/2;
 	printf("등차수열의 합 = %d\n", sum);
}
