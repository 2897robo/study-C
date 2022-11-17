#include <stdio.h>

int main() {
	int where;
	int a=0;
	int b=0;
	int c=1;

	printf("몇번째 항까지 구할까요? ");
	scanf("%d", &where);

	for(int time=0; time <= where; time++) {
	printf("%d, ",a);
	b=a+c;
	a=c;
	c=b;

	}

	printf("\n");

	return 0;
}
