#include <stdio.h>
int main()
{
	double x[10]={1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1};
	double sum = 0., *dp;
 	int i;

 	dp = &x[0];	// dp = x;
 
 	for(i=0; i<10; i++, dp++) {
		// dp는 실수의 바이트 수만큼 주소가 증가한다.
 		printf("%p: %4.1f\n", dp, *dp);
 		sum += *dp;
	}
	printf("sum = %f\n", sum);
}
