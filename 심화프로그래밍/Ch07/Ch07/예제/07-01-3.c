#include <stdio.h>
int main()
{
	int x[10] = {45,77,89,38,29,58,93,84,73,66};
 	int sum = 0, i, *x1;

 	x1 = &x[0];	// x1 = x;
 
 	for(i=0; i<10; i++, x1++)
		// x1은 정수의 바이트 수만큼 주소가 증가한다.
 		sum += *x1;
	printf("sum = %d\n", sum);
}
