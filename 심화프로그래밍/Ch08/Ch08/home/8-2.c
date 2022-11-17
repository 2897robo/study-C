#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static int compare(const void *a, const void *b);

int main()
{
	printf("20194487 ±è±â¿í\n"); 
	char line[1024];
	char *line_array[] = {"grape", "pear", "banana", "apple",
				"orange", "grapefruit"};
	int j = 0;
	qsort(line_array, 6, sizeof(char *), compare);
	while(j < 6)
		printf("%s\n", line_array[j++]);
}

static int compare(const void *a, const void *b) { 
	return strcmp(*(char **)a, *(char **)b);
}
