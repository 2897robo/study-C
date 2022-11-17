#include <stdio.h>

int main()
{
	int x[2][2] = {1,2,3,4};
	int y[2][2] = {2,4,6,8};
	int z[2][2], i, j, k, sum;
	
	printf("Matrix x:\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%5d", x[i][j]);
		}
		printf("\n");
	}

	printf("\nMatrix y:\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%5d", y[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			sum = 0;
			for(k=0; k<2; k++){
				sum = sum + x[i][k]*y[k][j];
 			}
			z[i][j] = sum;
		}
	}

	printf("\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%5d", z[i][j]);
		}
		printf("\n");
	}
}

