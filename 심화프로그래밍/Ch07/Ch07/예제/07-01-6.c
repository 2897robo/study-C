#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *x, *y, i, sum=0;
	double average;
	x = (int *)calloc(10, sizeof(int));// 동적으로 메모리를 할당하여 포인터를 x에 저장
	y = x;		// x를 y에 대입
	for(i=0; i<10; i++, y++) {		// 루프를 반복할 때마다 y의 포인터 증가
		printf("data input : ");
		scanf("%d", y);	//y는 포인터이므로 &(주소연산자)가 필요하지 않다.
	}
	y = x;		// y의 포인터를 다시 x로 설정
	for(i=0; i<10; i++, y++)		// 루프를 반복할 때마다 y의 포인터 증가
		sum += *y;			// y 포인터의 값을 sum에 더함
	average = (int)sum/10.0;
	printf("Average = %f\n", average );
	free(x);		// 할당된 메모리를 OS에게 돌려준다. 
}
