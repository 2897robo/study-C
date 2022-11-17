#include <stdio.h>
#include <string.h>
int main () {
	printf("20194487 김기욱");
	char Key[] = "apple", Input[80];
	char fruits[][15] = { "apple", "grape", "jujube", "pear", 
		"grapefruit", "chestnut"};
	int n;
	do {
		printf("내가 가장 좋아하는 과일은? ");
		gets(Input);
		if(strcmp(Key, Input) == 0) {
			puts("빙고!");
			break;
		} 
		else
			puts("땡!!!"); 
	} while (1);

	puts("-------------------------------\n");
	puts ("\ngrape로 시작하는 과일");
	for (n=0 ; n<6 ; n++)
		if (strncmp (fruits[n], "grapeXXX", 5) == 0) {
			printf ("%s\n", fruits[n]);
		}
}
