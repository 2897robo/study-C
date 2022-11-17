#include <stdio.h>
#include <string.h>
int main () {
	printf("20194487 ±è±â¿í");
	char str[][15] = { "apple" , "grape" , "jujube", 
			"pear", "grapefruit", "chestnut"};
	char tmp[15];
	int i, j;
	for (i=0; i<5; i++) {
		for (j=i+1; j<6; j++) {
			if (strcmp(str[i], str[j]) > 0) {
				strcpy(tmp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], tmp);
			}
		}
	}
	for (i=0; i<6; i++)
		printf("%s\n", str[i]);
}
