//Program Implementing the rot13 algorithm 

#include <stdio.h>
#define ROT 13

main()
{
	int c,e;

	for(;(c=getchar())!=EOF;) {
		if(c >='A' && c <='Z') {
			if((e = c + ROT) <= 'Z')
				putchar(e);
			else {
				e = c - ROT;
				putchar(e);
			}
		}
		else if(c >='a' && c <='z') {
			if((e= c + ROT) <= 'z')
				putchar(e);
			else {
				e = c - ROT;
				putchar(e);
			}
		}
		else 
			putchar(c);
	}
}
