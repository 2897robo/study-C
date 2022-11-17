#include <stdio.h>
int main()
{
	char Email[40]="kdhong@korea.org";
	char in_format[30]="%[^@]%[@]%[^\n]";
	char ID[20], at[2], server[30];
	sscanf(Email, in_format, ID, at, server);
	printf("%s\t%s\n", ID, server);
}
