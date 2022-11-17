#include <stdio.h>
int main()
{
	printf("20194487 김기욱");
	int matrix[][3] = { 5, 3, 4, 9, 1, 5, 9, 5, 4};
	int row, col, size, i, *p;
	size = sizeof(matrix) / sizeof(matrix[0][0]); // 배열의 전체 데이터의 개수 구함
	for(row=0; row<size/3; row++) {
		for(col=0; col<3; col++)
			printf("Array[%d][%d] = %d, ", row, 
				col, matrix[row][col]);
		printf("\b\b \n");
	}
	p = matrix[0];
	for(i=0; i<size; i++, p++) //포인터 이용 1차원적 액세스
		printf("%d ", *p);
	putch('\n');
}
