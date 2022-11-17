#include <stdio.h>
double average(int[], int);
int findMaxNum(int[], int);
int findMinNum(int[], int);

int main()
{
	printf("20194487 김기욱\n");
	int num[7] = { 9, 8, 9, 7, 9, 10, 6}, i;
	printf("심판들의 점수 ");
	for(i=0; i<7; i++)
		printf(" %d  ", num[i]);
	printf("\n 이 선수의 점수 : %f\n", average(num, 7));
}

double average(int array[], int x)
{
	int i, sum=0;
	for(i=0; i<x; i++)
		sum += array[i];
	sum -= ( findMaxNum(array, 7) + findMinNum(array, 7)); // 최댓값과 최솟값을 뺀다.
	return ((double)sum/(double)(x - 2));
}

int findMaxNum(int number[], int elements) // 최댓값 구하는 함수 
{ 
	int largest_value, i;
	largest_value = number[0];	// 배열 첫 번째 값을 largest_value 변수에 넣는다.
	for (i=0; i < elements; i++)
		if(number[i] > largest_value) // 배열의 값을 순차적으로 largest_value와 비교한다.
			largest_value = number[i];
	return largest_value;
}

int findMinNum(int number[], int elements) // 최솟값 구하는 함수 
{
	int i, smallest_value;
	smallest_value = number[0];	// 배열 첫 번째 값을 smallest_value 변수에 넣는다.
	for(i=1; i<elements; i++)
		if(smallest_value > number[i]) // 배열의 값을 순차적으로 smallest_value와 비교한다.
			smallest_value = number[i];
	return smallest_value;
}
