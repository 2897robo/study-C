#include <stdio.h>
#include <stdlib.h>
#define N 20

void FillArray(int *array, int count, int Number);

int main(void) {
	int array[N], n;

	FillArray(array, N, 50);
	for( n=0; n<N; n++)
		printf("%d ", array[n]);
	printf("\n");
}

void FillArray(int *arr, int c, int n) {
	int x;
	for(x = 0; x < c; x++, arr++)
		*arr = n;
}
