#include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "To be or not to be: that is Question.";
	char *pch;

	printf ("\"%s\"���� ���� 'o'�� �� ��° ��Ÿ���°�?\n", str);
	pch = strchr(str, 'o');
	while (pch != NULL)
	{
		printf ("%d��° ", pch - str + 1);
		pch = strchr(pch+1, 'o');
	}
	printf("%\n\n"); 
	pch=strrchr(str,'s');
	printf ("������ 's'�� %d��°�� �ִ�.\n", pch - str + 1);
}
