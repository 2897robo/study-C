#include <stdio.h>

int main()
{
	printf("20194487 ����\n");
	int x=56, y=90;
	inline void swap(int *a, int *b) {
		*a = *a + *b - (*b=*a);
	}

	swap(&x, &y);
	printf("%d, %d\n", x, y);
}
