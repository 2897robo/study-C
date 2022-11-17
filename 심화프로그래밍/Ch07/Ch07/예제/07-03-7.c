#include <stdio.h>
#include <string.h>
int main()
{
	static char *str[] = {"C language", "Java", "Python", "C++", "HTML"};
	char **s, i;
	s=str;
	for(i=0; i<5; i++, s++)
		printf("%p:%p:%s\n", &*s, *s, *s);
}
