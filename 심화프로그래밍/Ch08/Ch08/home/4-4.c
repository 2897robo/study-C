#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void *strrev(char *);

int main() {
	printf("20194487 ±è±â¿í\n");
	char *str, i, len, temp;
	str = (char *)malloc(100);
	strcpy(str, "This is example.");
	printf( "%s\n", str);
	strrev(str);
	printf("%s\n", str);
 	free(str);
}

void *strrev(char *s) {
	unsigned char len, temp, i;
	len = strlen(s);
	for(i=0; i<len/2; i++) {
		temp = *(s+i);
		*(s+i) = *(s+len-i-1);
		*(s+len-i-1) = temp;
	}	
}
