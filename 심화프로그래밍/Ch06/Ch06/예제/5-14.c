#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ����");
	char str[] = "almost every programmer should know memset!";
	memset (str, '-', 6);
	puts (str);
}
