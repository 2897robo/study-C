#include <stdio.h>
#include <string.h>
int main () {
	printf("20194487 ±è±â¿í");
	char str[] = "This is test string. We count how many vowels in this string.";
	int count=0;
	char key[] = "aeiouAEIOU", *pch;
	pch = strpbrk (str, key);
	while (pch != NULL) {
		count++;
		printf("%s\n", pch);
		pch = strpbrk (pch+1, key);
	}
	printf ("%d\n", count);
}
