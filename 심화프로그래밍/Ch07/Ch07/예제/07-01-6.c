#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *x, *y, i, sum=0;
	double average;
	x = (int *)calloc(10, sizeof(int));// �������� �޸𸮸� �Ҵ��Ͽ� �����͸� x�� ����
	y = x;		// x�� y�� ����
	for(i=0; i<10; i++, y++) {		// ������ �ݺ��� ������ y�� ������ ����
		printf("data input : ");
		scanf("%d", y);	//y�� �������̹Ƿ� &(�ּҿ�����)�� �ʿ����� �ʴ�.
	}
	y = x;		// y�� �����͸� �ٽ� x�� ����
	for(i=0; i<10; i++, y++)		// ������ �ݺ��� ������ y�� ������ ����
		sum += *y;			// y �������� ���� sum�� ����
	average = (int)sum/10.0;
	printf("Average = %f\n", average );
	free(x);		// �Ҵ�� �޸𸮸� OS���� �����ش�. 
}
