#include <stdio.h>
#define ROW 3
#define COL 3
int main()
{
 	int x[ROW][COL] = {1,2,3,4,5,6,7,8,9};
 	int y[ROW][COL] = {9,8,7,6,5,4,3,2,1};
 	int z[ROW][COL];
 	int i, j, *x1, *y1, *z1;
 	x1 = &x[0][0];		// x1 = (int *)x;
 	y1 = (int *)y;
 	z1 = (int *)z;
 	for(i=0; i<ROW*COL; i++, x1++, y1++, z1++)
 		*z1 = *x1 + *y1;
	z1 = (int *)z;
	for(i=0; i<ROW; i++) {
		for(j=0; j<COL; j++)
			printf("%3d ", *z1++);
		printf("\n");
	}
}
