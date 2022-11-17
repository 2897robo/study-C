#include <stdio.h>
int main()
{
 	int fact, s, e;
 	for(s=2; s<=10; s++) {
		fact = 1;
		printf("  %d!=", s);
		for(e=1; e<=s-1; e++) {
			fact *= e;
			printf("%d*", e);
		}
		fact *= s;
		printf("%d = %d\n", s, fact);
	}
}
