#include <stdio.h>
#include <string.h>

int main ()
{
	char szKey[] = "apple", szInput[80];
	char str[][15] = { "apple" , "grape" , "jujube", "pear", "grapefruit", "chestnut"};
	int n;

	do {
		printf("���� ���� �����ϴ� ������? ");
		gets(szInput);
		if(strcmp(szKey, szInput) == 0) {
			puts("����!");
			break;
		} 
		else 
			puts("��!!!"); 
	} while (1);
	puts("-------------------------------\n");
	puts ("\ngrape�� �����ϴ� ����");
	for (n=0 ; n<6 ; n++)
		if (strncmp (str[n], "grapeXXX", 5) == 0)	{
			printf ("%s\n", str[n]);
		}
	getch();
}
