#include <stdio.h>

void MaxMin(int *array, int Number, int *maximum, int *minimum);

int main(void)
{
	int arr[10] = { 43, 86, 31, 52, 13, 98, 48, 18, 75, 23 };
	int max, min;
	
	MaxMin(arr, 10, &max, &min);
	
	printf("Max = %d, Min = %d\n", max, min);
}

void MaxMin(int *dim, int N, int *max, int *min) {
	int x;
	*max = *min = *dim;		// 최대, 최소에 대한 초깃값을 배열의 첫 요소로 지정
	for(x = 1; x < N; x++) {		// 배열의 두 번째 요소부터 비교
		dim++;			// 포인터 이동
		if( *max < *dim)		// 최댓값 구하기
			*max = *dim;
		if( *min > *dim)		// 최솟값 구하기
			*min = *dim;
	}
}
