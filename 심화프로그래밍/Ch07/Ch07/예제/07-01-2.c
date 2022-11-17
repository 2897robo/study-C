#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *x;
	x = (int *)malloc(sizeof(int));		// 동적으로 메모리를 할당하여 포인터를 x에 저장	
	// sizeof(int)는 sizeof(4)와 같다. 
	*x = 123;
	printf("x가 가리키는 곳의 값:%d\n", *x);
	free(x);		// 할당된 메모리를 OS에게 돌려준다. 
}
