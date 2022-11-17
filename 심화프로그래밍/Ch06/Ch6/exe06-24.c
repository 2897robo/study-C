#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[50] = "To be ";
	char str2[50] = "or not to be: that is Question.";
	strncat(str1, str2, 12);
	puts(str1);
}
