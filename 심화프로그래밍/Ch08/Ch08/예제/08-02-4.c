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
	*max = *min = *dim;		// �ִ�, �ּҿ� ���� �ʱ갪�� �迭�� ù ��ҷ� ����
	for(x = 1; x < N; x++) {		// �迭�� �� ��° ��Һ��� ��
		dim++;			// ������ �̵�
		if( *max < *dim)		// �ִ� ���ϱ�
			*max = *dim;
		if( *min > *dim)		// �ּڰ� ���ϱ�
			*min = *dim;
	}
}
