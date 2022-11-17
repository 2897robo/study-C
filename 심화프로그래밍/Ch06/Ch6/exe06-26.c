#include <stdio.h>
#include <string.h>

int main ()
{
	char szKey[] = "apple", szInput[80];
	char str[][15] = { "apple" , "grape" , "jujube", "pear", "grapefruit", "chestnut"};
	int n;

	do {
		printf("내가 가장 좋아하는 과일은? ");
		gets(szInput);
		if(strcmp(szKey, szInput) == 0) {
			puts("정답!");
			break;
		} 
		else 
			puts("땡!!!"); 
	} while (1);
	puts("-------------------------------\n");
	puts ("\ngrape로 시작하는 과일");
	for (n=0 ; n<6 ; n++)
		if (strncmp (str[n], "grapeXXX", 5) == 0)	{
			printf ("%s\n", str[n]);
		}
	getch();
}
