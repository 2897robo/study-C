#include <stdio.h>
int main()
{
	char ch;
	int dec = 365;	// 365 = 101101101
	
	ch = (char)dec;		// 1101101 = 109
	printf("%d\n", ch);
}
