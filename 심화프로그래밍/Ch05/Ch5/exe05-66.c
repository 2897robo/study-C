#include <stdio.h>

int main()
{
	int x, y;
	printf("306 * x + 459 * y == 765�� �Ǵ� x, y�� \n");

	for(x = -10; x <=10; x++)
		for(y = -10; y <= 10; y++)
			if(306 * x + 459 * y == 765 ) {		// ���ǽ��� �����ϸ� 
				printf("(%d, %d)  ", x, y);
				break;
			}
}
