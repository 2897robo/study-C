#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *x, i, sum=0;
	double average;
	x = (int *)calloc(10, sizeof(int));// 동적으로 메모리를 할당하여 포인터를 x에 저장
	for(i=0; i<10; i++) {
		printf("data input : ");
		scanf("%d", &x[i]);
	}

	for(i=0; i<10; i++)
		sum += x[i];
	average = (int)sum/10.0;
	printf("Average = %f\n", average );
	free(x);		// 할당된 메모리를 OS에게 돌려준다. 
}
