#include <stdio.h>
int main()
{
	int x=396, y=29, a, b;
	a = x / y;
	b = x - a * y;
	printf("������ = %d\n",  b);
	printf("%d %% %d = %d\n", x, y, x%y);
}
