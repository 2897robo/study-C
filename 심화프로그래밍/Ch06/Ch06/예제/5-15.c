#include <stdio.h>
#include <string.h>
int main () {
	printf("20194487 ����");
	char Key[] = "apple", Input[80];
	char fruits[][15] = { "apple", "grape", "jujube", "pear", 
		"grapefruit", "chestnut"};
	int n;
	do {
		printf("���� ���� �����ϴ� ������? ");
		gets(Input);
		if(strcmp(Key, Input) == 0) {
			puts("����!");
			break;
		} 
		else
			puts("��!!!"); 
	} while (1);

	puts("-------------------------------\n");
	puts ("\ngrape�� �����ϴ� ����");
	for (n=0 ; n<6 ; n++)
		if (strncmp (fruits[n], "grapeXXX", 5) == 0) {
			printf ("%s\n", fruits[n]);
		}
}
