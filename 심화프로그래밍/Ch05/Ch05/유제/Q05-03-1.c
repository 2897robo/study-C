#include <stdio.h>
int main()
{
	int x, y;
	x = -10;
	while(x<10) {
		y = -10;
		while(y<10) {
			if(x*x + y*y < 25)  // 원의 내부에 있는지 확인한다. 
				printf("(%d,%d) ", x, y);
			y++;
		}
		x++;
	}
}
