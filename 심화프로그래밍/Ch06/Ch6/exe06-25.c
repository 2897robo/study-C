#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "To be or not to be: that is Question.";
	char *pch;

	printf ("\"%s\"에서 문자 'o'가 몇 번째 나타나는가?\n", str);
	pch = strchr(str, 'o');
	while (pch != NULL)
	{
		printf ("%d번째 ", pch - str + 1);
		pch = strchr(pch+1, 'o');
	}
	printf("%\n\n"); 
	pch=strrchr(str,'s');
	printf ("마지막 's'는 %d번째에 있다.\n", pch - str + 1);
}
