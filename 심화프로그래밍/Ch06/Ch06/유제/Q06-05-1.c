#include <stdio.h>
#include <string.h>

int main () {
	char str[] = "This is test string. We count how many vowels in this string.";
	char s2[50];
	
	strcpy(s2, strpbrk (str, ".")+2);
	str[strpbrk (str, ".") - str + 1]= '\0';
	printf("%s\n%s\n", str, s2);
}
