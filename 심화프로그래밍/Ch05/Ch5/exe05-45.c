#include <stdio.h>

int main()
{
	int x, y, ite;

	for(ite=1000; ite<10000; ite++) {
		x = ite/100;		// ���� �� �ڸ��� �߶󳽴�. 
		y = ite%100;		// ���� �� �ڸ��� �߶󳽴�. 
		if(ite == (x+y)*(x+y))
			printf("%d is kaprika number\n", ite);
	}
}

