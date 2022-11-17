#include <stdio.h>
int main()
{
	printf("20194487 ±è±â¿í");
	int x[10] = { [4]=10,15, [9]=50 };
	int y[5][5]= { [0][0]=1, [1][1]=1, [2][2]=1, [3][3]=1, [4][4]=1};
	int a, b;
	
	for(a=0; a<10; a++)
		printf("%d ", x[a]);
	printf("\n\n");

	for(a=0; a<5; a++) {
		for(b=0; b<5; b++)
			printf("%d ", y[a][b]);
		printf("\n");
	}
}
