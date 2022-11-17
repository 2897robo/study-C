#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int X_DIM=16;
int Y_DIM=5;
int Z_DIM=3;

int main( )
{
	char *space, ***Arr3D;
	int y, z;
	ptrdiff_t diff;
	/* 3차원 배열 전체에 대한 공간 확보 */
	space = malloc(X_DIM * Y_DIM * Z_DIM * sizeof(char));
	/* 포인터의 배열에 대한 공간 할당, 이들 각각은 결과적으로 2차원 배열의
	첫 번째 요소를 포인트한다. 즉, 포인터의 포인터 2차원 배열이다. */
	Arr3D = malloc(Z_DIM * sizeof(char **));
	/* 행에 대한 포인터 배열을 새로 할당된 공간에 대입한다. */
	for (z = 0; z < Z_DIM; z++) {
		Arr3D[z] = malloc(Y_DIM * sizeof(char *));
		/* 이들 각각의 공간에는 각 행의 첫 번째 요소를 포인트한다. 
		즉, 원래 할당된 각 행의 배열 공간에 있는 첫 번째 요소이다. */
		for (y = 0; y < Y_DIM; y++) {
		    Arr3D[z][y] = space + (z*(X_DIM * Y_DIM) + y*X_DIM);
		}
	}
	/* 이제, 3차원 공간이 연속적으로 어떻게 저장되는지 배열의 인덱스를
	통해서 3차원 배열공간의 각 주소를 점검해보자. */
	for (z = 0; z < Z_DIM; z++) {
		printf("배열 %d의 위치는 %p\n", z, *Arr3D[z]);
		for ( y = 0; y < Y_DIM; y++) {
			printf(" 배열 %d, 행 %d의 시작주소: %p", z, y, 
				Arr3D[z][y]);
			diff = Arr3D[z][y] - space;
			printf(" diff = %4d ",diff);
			printf(" z = %d y = %d\n", z, y);
		}
	}
	free(space);
	free(Arr3D);
}
