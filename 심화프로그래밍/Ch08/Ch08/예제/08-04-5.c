#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void StrUpr(char *);

int main() {
	char *str;
	str = (char *)malloc(400);
	strcpy(str, "Char string_name[size];");
	printf("%s\n", str);
	StrUpr(str);
	printf("%s\n", str);
 	free(str);
}

void StrUpr(char *s) {
	while(*s++)
		if(*s >= 'a' && *s <= 'z')
			*s -= ('a'-'A');
}
