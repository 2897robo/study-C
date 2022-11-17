#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("20194487 ±è±â¿í");
	int i=0, length;
	char str[] = "This Is a Test String!";
	
	for(i=0; str[i]; i++)
		if(islower(str[i]))
			str[i] = toupper(str[i]);
		else if(isupper(str[i]))
			str[i] = tolower(str[i]);
	puts(str);
}
