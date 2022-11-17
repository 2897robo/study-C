#include <stdio.h>
double average(int[], int);
int findMaxNum(int[], int);
int findMinNum(int[], int);

int main()
{
	printf("20194487 ����\n");
	int num[7] = { 9, 8, 9, 7, 9, 10, 6}, i;
	printf("���ǵ��� ���� ");
	for(i=0; i<7; i++)
		printf(" %d  ", num[i]);
	printf("\n �� ������ ���� : %f\n", average(num, 7));
}

double average(int array[], int x)
{
	int i, sum=0;
	for(i=0; i<x; i++)
		sum += array[i];
	sum -= ( findMaxNum(array, 7) + findMinNum(array, 7)); // �ִ񰪰� �ּڰ��� ����.
	return ((double)sum/(double)(x - 2));
}

int findMaxNum(int number[], int elements) // �ִ� ���ϴ� �Լ� 
{ 
	int largest_value, i;
	largest_value = number[0];	// �迭 ù ��° ���� largest_value ������ �ִ´�.
	for (i=0; i < elements; i++)
		if(number[i] > largest_value) // �迭�� ���� ���������� largest_value�� ���Ѵ�.
			largest_value = number[i];
	return largest_value;
}

int findMinNum(int number[], int elements) // �ּڰ� ���ϴ� �Լ� 
{
	int i, smallest_value;
	smallest_value = number[0];	// �迭 ù ��° ���� smallest_value ������ �ִ´�.
	for(i=1; i<elements; i++)
		if(smallest_value > number[i]) // �迭�� ���� ���������� smallest_value�� ���Ѵ�.
			smallest_value = number[i];
	return smallest_value;
}
