#include <stdio.h>

int main()
{
	int x, y;
	printf("306 * x + 459 * y == 765가 되는 x, y는 \n");

	for(x = -10; x <=10; x++)
		for(y = -10; y <= 10; y++)
			if(306 * x + 459 * y == 765 ) {		// 조건식을 만족하면 
				printf("(%d, %d)  ", x, y);
				break;
			}
}
