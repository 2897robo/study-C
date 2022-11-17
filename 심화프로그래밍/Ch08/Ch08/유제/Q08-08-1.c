/* qsort example */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int (*compare) (const void *, const void *);

int compare_ints (const void * a, const void * b) {
	return ( *(int*)a - *(int*)b );
}

int compare_doubles (const void * x, const void * y)
{
	if (*(double *)x > *(double *)y)
		return 1;
	else if (*(double *)x < *(double *)y)
		return -1;
	else 
		return 0;
}

int values[] = { 40, 10, 100, 90, 20, 25 };
double a[] = {29.3, 493.2, 9.89, 8393.4, 2939.4, 0.002, 1929.3, 18.1};

int main ()
{
	int i = 0, key = 40, *pItem;
	double dkey = 9.89, *dItem; 
	compare = compare_ints;
	qsort (values, 6, sizeof(int), compare);

	printf("���� �˻� :\n"); 
	pItem = (int*) bsearch (&key, values, 6, sizeof (int), compare_ints);
	if (pItem)	 // pItem != NULL
		printf ("%d�� �迭�� ����.\n", *pItem);
	else 
		printf ("%d�� �迭�� ����.\n", key);
	printf("\n");
	compare = compare_doubles;
	qsort(a, 8, sizeof(double), compare);
	printf("�Ǽ� �˻� :\n"); 
	dItem = (double*) bsearch (&dkey, a, 8, sizeof(double), compare_doubles);
	if (dItem)	// dItem != NULL
		printf ("%f�� �迭�� ����.\n", *dItem);
	else 
		printf ("%f�� �迭�� ����.\n", key);
	printf("\n");
}
