#include <stdio.h>

int main()
{
	int x=0;
	while( (x+=9) <= 100)
			printf("%d ", x);
}

/*
#include <stdio.h>

int main()
{
	int x=1;
	while(x <= 100) {
		if(!(x%9))
			printf("%d ", x);
		x++;
	}
}
*/

/*
#include <stdio.h>

int main()
{
	int x=9;
	while(x <= 100) {
		printf("%d ", x);
		x += 9;
	}
}
*/
