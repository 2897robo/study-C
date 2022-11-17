#include <stdio.h>

void bubble(int *p, int N);
int compare(int *m, int *n);

int main(void)
{
	int arr[10] = { 43, 86, 31, 52, 13, 98, 48, 18, 75, 23 };
	int i;
	printf("\n");
	for (i = 0; i < 10; i++)			// 정렬하기 전에 출력한다.
		printf("%d ", arr[i]);

	bubble(arr,10);				// 정렬함수 호출
	printf("\n");

	for (i = 0; i < 10; i++)			// 정렬하고 나서 출력한다.
		printf("%d ", arr[i]);
	printf("\n");
}

void bubble(int *p, int N) {		// 버블 정렬한다.
	int i, j, t;
	for (i = N-1; i >= 0; i--) {
		for (j = 1; j <= i; j++) {
			if (compare(p+j-1, p+j)) {	// 두 수를 비교하는 함수 호출
				t = *(p+j-1);			// 데이터 교환
				*(p+j-1) = *(p+j);
				*(p+j) = t;
			}
		}
	}
}

int compare(int *m, int *n) {	// 크기를 비교하여 앞의 값이 크면 1을 그렇지 않으면
	return (*m > *n);			// 0을 반환한다.
}
