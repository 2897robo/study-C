#include <stdio.h>
void add_xy(int, int, int);
void add_xy_p(int, int, int *);

int main()
{
	printf("20194487 ����\n");
	int x, y, total;
	x = 10;
	y = 5;
	total = 0;
	printf("main �Լ������� total = %d\n\n", total);
	add_xy(x, y, total);
	printf("main �Լ������� total = %d\n\n", total);
	add_xy_p(x, y, &total);
	printf("main �Լ������� total = %d\n\n", total);
}

void add_xy(int x, int y, int total) {
	total = x + y;
	printf("add_xy �Լ������� total = %d\n", total);
}

void add_xy_p(int x, int y, int *total) {
	*total = x + y;
	printf("add_xy_p �Լ������� total = %d\n", *total);
}
