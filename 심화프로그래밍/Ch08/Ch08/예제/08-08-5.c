/* bsearch example with strings */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char strvalues[][20] = {"some", "example", "strings", "here"};
// ���ĵǾ� ���� �����Ƿ� �����Ͽ� �˻��Ѵ�.

int main ()
{
	char * pItem;
	char key[20] = "example";
	/* ���ڿ� �迭�� ���ĵǾ� ���� �����Ƿ� �����Ѵ�. */ 
	qsort (strvalues, 4, 20, (int(*)(const void*, const void*)) strcmp);
	/* ���ĵ� ���ڿ��� ���ؼ� 2�� �˻��� �Ѵ�. */ 
	pItem = (char*) bsearch (key, strvalues, 4, 20,
			 (int(*)(const void*, const void*)) strcmp);

	if (pItem!=NULL)
		printf ("%s is in the array.\n", pItem);
	else 
		printf ("%s is not in the array.\n", key);
}
