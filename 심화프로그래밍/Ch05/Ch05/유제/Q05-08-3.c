#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int Secret, Guess;
	srand ( time(NULL) );
	Secret = rand() % 10 + 1;
	do {
		printf ("수 입력(1 ~ 10): ");
		scanf ("%d", &Guess);
		if (Secret<Guess)
			printf("%d보다 작아요.\n", Guess);
		else if (Secret>Guess)
			printf ("%d보다 커요.\n", Guess);
	} while (Secret != Guess);
	puts ("네.. 맞혔네요!");
}
