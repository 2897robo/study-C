#include <stdio.h>

int main()
{
	int x, y, ite;

	for(ite=1000; ite<10000; ite++) {
		x = ite/100;		// 앞의 두 자리를 잘라낸다. 
		y = ite%100;		// 뒤의 두 자리를 잘라낸다. 
		if(ite == (x+y)*(x+y))
			printf("%d is kaprika number\n", ite);
	}
}

