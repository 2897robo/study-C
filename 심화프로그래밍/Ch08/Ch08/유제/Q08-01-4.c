#include <stdio.h>
void dan(int);

int main()
{
	int d;

	printf("���� �Է� : ");
	scanf("%d", &d);
	dan(d);
}

void dan(int d)
{
 	int i;
 	printf("\n%5d��\n", d);
	for(i=1; i<10; i++)
		printf("%2d * %2d = %2d\n", d, i, d*i);
	printf("\n");
	return ;
} 
