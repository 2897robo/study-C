#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ����");
	char str1[]="Sample string";
	char str2[40];
	char str3[40];
	memcpy (str2, str1, strlen(str1) + 1);
	memcpy (str3, "copy successful", 16);
	printf ("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
}
