/* bsearch example with strings */ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char strvalues[][20] = {"some", "example", "strings", "here"};
// 정렬되어 있지 않으므로 정렬하여 검색한다.

int main ()
{
	char * pItem;
	char key[20] = "example";
	/* 문자열 배열이 정렬되어 있지 않으므로 정렬한다. */ 
	qsort (strvalues, 4, 20, (int(*)(const void*, const void*)) strcmp);
	/* 정렬된 문자열에 대해서 2진 검색을 한다. */ 
	pItem = (char*) bsearch (key, strvalues, 4, 20,
			 (int(*)(const void*, const void*)) strcmp);

	if (pItem!=NULL)
		printf ("%s is in the array.\n", pItem);
	else 
		printf ("%s is not in the array.\n", key);
}
