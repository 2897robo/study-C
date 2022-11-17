#include <stdio.h>
int main()
{
	printf("20194487 ±è±â¿í");
	int i, j, total[3][3];
	int arr1[3][3] = {{3,6,9},{6,8,4},{7,8,9}},
	    arr2[3][3] = {{5,7,3},{9,6,1},{9,4,6}};
	for (i=0; i<3; i++)	// µÎ Çà·ÄÀÇ µ¡¼À 
		for (j=0; j<3; j++)
			total[i][j] = arr1[i][j] + arr2[i][j]; 

	for (i=0; i<3; i++) { // °è»ê °á°ú Ãâ·Â 
		for (j=0; j<3; j++)
			printf("%4d ", total[i][j]);
		printf("\n");
	}
}
