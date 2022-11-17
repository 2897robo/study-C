#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("20194487 ±è±â¿í");
	int i=0;
	printf("Upper Characters:\n");
	for(i=0; i<128; i++)
		if(isupper(i))
			putchar(i);

	printf("\n\nLower Characters:\n");
	for(i=0; i<128; i++)
		if(islower(i))
			putchar(i);

	printf("\n\nAlphabets :\n");
	for(i=0; i<128; i++)
		if(isalpha(i))
			putchar(i);

	printf("\n\nDigits :\n");
	for(i=0; i<128; i++)
		if(isdigit(i))
			putchar(i);

	printf("\n\nHexadigits :\n");
	for(i=0; i<128; i++)
		if(isxdigit(i))
			putchar(i);

	printf("\n\nAlpha Numerics :\n");
	for(i=0; i<128; i++)
		if(isalnum(i))
			putchar(i);

	printf("\n\nPunctuations :\n");
	for(i=0; i<128; i++)
		if(ispunct(i))
			putchar(i);

	printf("\n\nGraphes :\n");
	for(i=0; i<128; i++)
		if(isgraph(i))
			putchar(i);

	printf("\n\nPrintables :\n");
	for(i=0; i<128; i++)
		if(isprint(i))
			putchar(i);
}
