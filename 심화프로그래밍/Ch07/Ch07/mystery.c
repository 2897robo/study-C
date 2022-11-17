#include <stdio.h>

int mystery ( int x , int  n) {    
	int val = 1;
	if (n>0) {
		if (n%2 == 1)
			val = x;
		val = val * mystery(x*x , n/2);
	}
	return val;
}

int main()
{
	printf("%d\n", mystery(5,4));
}

