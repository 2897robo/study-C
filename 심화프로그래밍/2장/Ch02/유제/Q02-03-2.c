#include <stdio.h>
int main()
{
	int x=39209, h, m, s;
	printf("%d�� = ", x); 
	h = x / 3600;
	x = x % 3600;
	m = x / 60;
	s = x % 60;
	printf("%d�� %d�� %d��\n",  h, m, s);
}
