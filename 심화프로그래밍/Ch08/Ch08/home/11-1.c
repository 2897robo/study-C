#include <stdio.h>

int main()
{
	printf("20194487 ±è±â¿í\n");
	int x=56, y=90, m;
	inline int max(int a, int b)
	{
  		return (a > b) ? a : b;
	}

	m = max(x,y);
	printf("%d\n", m);

	int z=100;
	m = max(m, z);
	printf("%d\n", m);
}
