/* qsort all in 1*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int (*compare) (const void *, const void *);	// �Լ��� ������
// ��� �Լ��� ������ ���·� �ٽ� �����.
int compare_ints (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}
// ��� �Լ��� ������ ���·� �ٽ� �����.
int compare_strings (const void *a, const void *b) { 
	return strcmp(*(char **)a, *(char **)b);
}

// ��� �Լ��� ������ ���·� �ٽ� �����.
int compare_doubles (const void * x, const void * y) {
	if (*(double *)x > *(double *)y)
		return 1;
	else if (*(double *)x < *(double *)y)
		return -1;
	else 
		return 0;
}
// �ʱⰪ, ���ĵ��� ���� ���� �̸� �迭�� ������ �д�.
int values[] = { 40, 10, 100, 90, 20, 25 };
char *line_array[] = {"grape", "pear", "banana", "apple", "orange", "grapefruit"};
double a[] = {29.3, 493.2, 9.89, 8393.4, 2939.4, 0.002, 1929.3, 18.1};

int main ()
{
	printf("20194487 ����\n");
	int i = 0;
	compare = compare_ints;	   // �Լ��� �����Ϳ� ���� ���Լ� ����
	qsort (values, 6, sizeof(int), compare);	// ���� ����
	printf("���� ���� :\n"); 
	for (i=0; i<6; i++)
		printf ("%d ",values[i]);
	printf("\n\n");

	compare = compare_strings;  // �Լ��� �����Ϳ� ���ڿ� ���Լ� ����
	qsort(line_array, 6, sizeof(char *), compare);
	printf("���ڿ� ���� :\n"); 
	for (i=0; i<6; i++)
		printf("%s  ", line_array[i]);
	printf("\n\n");

	compare = compare_doubles;  // �Լ��� �����Ϳ� �Ǽ� ���Լ� ����
	qsort(a, 8, sizeof(double), compare);
	printf("�Ǽ� ���� :\n"); 
	for (i=0;i<8;i++)
		printf("%7.1f  ",a[i]);
	printf("\n\n");
}
