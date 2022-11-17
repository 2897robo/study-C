#include <stdio.h>
int main()
{
	int data1=10, data2=10;

	printf("original data %d, %d\n", data1, data2);
	printf("%d, %d\n", data1++, data2--);
	printf("%d, %d\n", data1++, data2--);

	data1=10, data2=10;
	printf("\noriginal data %d, %d\n", data1, data2);
	printf("%d, %d\n", ++data1, --data2);
	printf("%d, %d\n", ++data1, --data2);
}
