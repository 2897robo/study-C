#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int Secret, Guess;
	srand ( time(NULL) );
	Secret = rand() % 10 + 1;
	do {
		printf ("�� �Է�(1 ~ 10): ");
		scanf ("%d", &Guess);
		if (Secret<Guess)
			printf("%d���� �۾ƿ�.\n", Guess);
		else if (Secret>Guess)
			printf ("%d���� Ŀ��.\n", Guess);
	} while (Secret != Guess);
	puts ("��.. �����׿�!");
}
