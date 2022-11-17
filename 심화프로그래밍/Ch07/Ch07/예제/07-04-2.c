#include <stdio.h>
#include <stdlib.h>
int main( )
{
	int nrows = 5;
 	int ncols = 10;
	int row;
	int **rowptr;
	rowptr = malloc(nrows * sizeof(int *));
	if (rowptr == NULL) {
		puts("\n�� ������ ���� Ȯ���� ��������.\n");
		exit(0);
	}
	printf("\nIndex Pointer(hex) Pointer(dec) Diff.(dec)");
	for (row = 0; row < nrows; row++) {
		rowptr[row] = malloc(ncols * sizeof(int));
		if (rowptr[row] == NULL) {
			printf("\n�� %d�� ���� ����Ȯ�� ����\n", row);
			exit(0);
		}
		printf("\n%d %p %d", row, rowptr[row], rowptr[row]);
		if (row > 0)
			printf(" %d",(int)(rowptr[row] - rowptr[row-1]));
	}
	free(rowptr);
}
