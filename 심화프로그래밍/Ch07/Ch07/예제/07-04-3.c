#include <stdio.h>
#include <stdlib.h>
int main( )
{
	int **rptr, *aptr, *testptr;
	int k, nrows = 5, ncols = 8;
	int row, col;

	aptr = malloc(nrows * ncols * sizeof(int)); 	/* ��ü �޸� ���� �Ҵ�*/
	if (aptr == NULL) {
		puts("\n�迭 ���� Ȯ���� ��������.");
		exit(0);
	}

	rptr = malloc(nrows * sizeof(int *)); 	/* �࿡ ���� �����͸� �Ҵ��� ���� Ȯ�� */
	if (rptr == NULL) {
		puts("\n�迭 ���� Ȯ���� ��������.");
		exit(0);
	}

	for (k = 0; k < nrows; k++)		/* �����Ϳ� ���� ������ ����; ���� ������ ���� */
		rptr[k] = aptr + (k * ncols);
	/* ���� �����Ͱ� ��� �����ϴ��� Ȯ���Ѵ�. */
	printf("\n\n�� �����Ͱ� ��� �����ϴ��� �����ش�.");
	printf("\n\nIndex Pointer(hex) Diff.(dec)");
	for (row = 0; row < nrows; row++){
		printf("\n%d %p", row, rptr[row]);
		if (row > 0)
			printf(" %d",(rptr[row] - rptr[row-1]));
	}
	printf("\n\n�迭 ��ü ���\n");
	for (row = 0; row < nrows; row++) {
		for (col = 0; col < ncols; col++) {
			rptr[row][col] = row + col;
			printf("%3d ", rptr[row][col]);
		}
		putchar('\n');
	}
	puts("\n");
	/* ���⼭�� 2���� �迭�� �޸� ��Ͽ��� ���������� ����Ǿ� �ִ����� 
	Ȯ���Ͽ� ���캻��. */
	printf("�迭�� �޸𸮿� ���������� ��� ����Ǵ��� �����ش�.\n");
	testptr = aptr;
	for (row = 0; row < nrows; row++) {
		for (col = 0; col < ncols; col++)
			printf("%3d ", *(testptr++));
		putchar('\n');
	}
	free(aptr);
	free(rptr);
}
