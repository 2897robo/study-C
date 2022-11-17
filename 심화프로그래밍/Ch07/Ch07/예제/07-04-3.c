#include <stdio.h>
#include <stdlib.h>
int main( )
{
	int **rptr, *aptr, *testptr;
	int k, nrows = 5, ncols = 8;
	int row, col;

	aptr = malloc(nrows * ncols * sizeof(int)); 	/* 전체 메모리 공간 할당*/
	if (aptr == NULL) {
		puts("\n배열 공간 확보에 실패했음.");
		exit(0);
	}

	rptr = malloc(nrows * sizeof(int *)); 	/* 행에 대한 포인터를 할당할 공간 확보 */
	if (rptr == NULL) {
		puts("\n배열 공간 확보에 실패했음.");
		exit(0);
	}

	for (k = 0; k < nrows; k++)		/* 포인터에 대한 포인터 설정; 행의 포인터 설정 */
		rptr[k] = aptr + (k * ncols);
	/* 행의 포인터가 어떻게 증가하는지 확인한다. */
	printf("\n\n행 포인터가 어떻게 증가하는지 보여준다.");
	printf("\n\nIndex Pointer(hex) Diff.(dec)");
	for (row = 0; row < nrows; row++){
		printf("\n%d %p", row, rptr[row]);
		if (row > 0)
			printf(" %d",(rptr[row] - rptr[row-1]));
	}
	printf("\n\n배열 전체 출력\n");
	for (row = 0; row < nrows; row++) {
		for (col = 0; col < ncols; col++) {
			rptr[row][col] = row + col;
			printf("%3d ", rptr[row][col]);
		}
		putchar('\n');
	}
	puts("\n");
	/* 여기서는 2차원 배열이 메모리 블록에서 연속적으로 저장되어 있는지를 
	확인하여 살펴본다. */
	printf("배열이 메모리에 연속적으로 어떻게 저장되는지 보여준다.\n");
	testptr = aptr;
	for (row = 0; row < nrows; row++) {
		for (col = 0; col < ncols; col++)
			printf("%3d ", *(testptr++));
		putchar('\n');
	}
	free(aptr);
	free(rptr);
}
