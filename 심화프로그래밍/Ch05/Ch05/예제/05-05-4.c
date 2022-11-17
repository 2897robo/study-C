#include <stdio.h>
int main()
{
	int number; 
	double sum= 0.0, sign = 1.0;
		//sign은 +, - 부호를 바꿔주기 위해 사용된 변수다. 
	for (number=1; sum < 0.69; number++, sign=-sign)
		sum += sign * (double)number/(double)(number+1);
	printf("number = %d, sum = %f\n", number, sum);
}
