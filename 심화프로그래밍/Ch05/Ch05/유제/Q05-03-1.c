#include <stdio.h>
int main()
{
	int x, y;
	x = -10;
	while(x<10) {
		y = -10;
		while(y<10) {
			if(x*x + y*y < 25)  // ���� ���ο� �ִ��� Ȯ���Ѵ�. 
				printf("(%d,%d) ", x, y);
			y++;
		}
		x++;
	}
}
