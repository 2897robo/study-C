#include <stdio.h>

int main()
{
	printf("20194487 ±è±â¿í\n");
	int x=100, y=1;
	inline void swap(int *a, int *b) {
		*a = *a + *b - ( *b = *a );
	}

	inline int sum(int a, int b){
		int s = 0;
		for(int i=a; i<=b; i++)
			s += i;
		return s;
	}

	if ( x > y )
		swap(&x, &y);

	printf("%d\n", sum(x, y));
}
