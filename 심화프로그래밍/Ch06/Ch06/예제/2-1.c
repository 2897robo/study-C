#include <stdio.h>
int main()
{
	printf("20194487 ±è±â¿í");
	int Array[3][3] = { {5, 3, 4}, {9, 1, 5}, {9, 5, 4} }, row, col;
	for (row=0; row<3; row++) {
		for (col=0; col<3; col++)
			printf("Array[%d][%d] = %d, ", row, col, Array[row][col]);
		printf("\b\b \n");
	}
}
