#include <stdio.h>
int main()
{
	int number; 
	double sum= 0.0, sign = 1.0;
		//sign�� +, - ��ȣ�� �ٲ��ֱ� ���� ���� ������. 
	for (number=1; sum < 0.69; number++, sign=-sign)
		sum += sign * (double)number/(double)(number+1);
	printf("number = %d, sum = %f\n", number, sum);
}
