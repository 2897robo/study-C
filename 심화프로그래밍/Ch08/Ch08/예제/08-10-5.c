/* difftime example */ 
#include <stdio.h>
#include <time.h>

int main ()
{
	time_t start, end;
	char name[256];
	double diff;

	time (&start);
	printf ("����� �̸��� �Է��Ͻÿ�: ");
	gets (name);
	time (&end);
	diff = difftime (end, start);
	printf ("�ȳ� %s.\n", name);
	printf ("����� �̸��� �Է��ϴµ� %.2f�� �ɷȽ��ϴ�.\n", diff );
	return 0;
}
