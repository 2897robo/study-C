#include <stdio.h>
int main()
{
	int i, j, dim[5][5] = {{4,5,7,8,9}, {5,2,4,6,2}, {4,7,8,5,2},
				    {3,5,8,9,6}, {7,5,6,9,8}};
	const int max_count = sizeof(dim)/sizeof(dim[0]); 

	printf("�ʱ� ���\n"); 
	for (i=0; i<max_count; i++) { 
		for (j=0; j<max_count; j++)
			printf(" %d ", dim[i][j]);
		printf("\n");
	} 
	printf("\n");
	// ��ġ��ķ� ��ȯ�ϴ� ���� 
	for (i=0; i<max_count; i++) {	 // ��� ���� ��ġ�� �ٲ� 
		for (j=0; j<i; j++) {
			dim[i][j] ^= dim[j][i];
			dim[j][i] ^= dim[i][j];
			dim[i][j] ^= dim[j][i];
		}
	}

	printf("��ġ ���\n");	// �ٲ� ��� ��� 
	for (i=0; i<max_count; i++) { 
		for (j=0; j<max_count; j++)
			printf(" %d ", dim[i][j]); 
		printf("\n"); 
	}
}
