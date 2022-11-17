#include <stdio.h>
int main()
{
	int i, j, dim[5][5] = {{4,5,7,8,9}, {5,2,4,6,2}, {4,7,8,5,2},
				    {3,5,8,9,6}, {7,5,6,9,8}};
	const int max_count = sizeof(dim)/sizeof(dim[0]); 

	printf("초기 행렬\n"); 
	for (i=0; i<max_count; i++) { 
		for (j=0; j<max_count; j++)
			printf(" %d ", dim[i][j]);
		printf("\n");
	} 
	printf("\n");
	// 전치행렬로 변환하는 과정 
	for (i=0; i<max_count; i++) {	 // 행과 열의 위치를 바꿈 
		for (j=0; j<i; j++) {
			dim[i][j] ^= dim[j][i];
			dim[j][i] ^= dim[i][j];
			dim[i][j] ^= dim[j][i];
		}
	}

	printf("전치 행렬\n");	// 바뀐 결과 출력 
	for (i=0; i<max_count; i++) { 
		for (j=0; j<max_count; j++)
			printf(" %d ", dim[i][j]); 
		printf("\n"); 
	}
}
