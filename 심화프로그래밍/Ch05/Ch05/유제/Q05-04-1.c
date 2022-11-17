#include <stdio.h>
int main()
{
	int password=12345, in_pass, cnt=0, correct=0;
	do {
		printf("Input password: ");
		scanf("%d", &in_pass);
		cnt++;
	  	if (in_pass == password) {
			correct = 1;
			break;
		}
		printf("%d: your password is incorrect!\n", cnt);
	} while (cnt < 3);
	if (correct)
		printf("Congratulation!!! Your password is correct!!\n");
	else 
		printf("You were wrong in 3 times!!! Please contact your manager.\n");
}
