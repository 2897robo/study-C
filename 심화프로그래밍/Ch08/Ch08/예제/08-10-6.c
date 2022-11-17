/* difftime example */ 
#include <stdio.h>
#include <time.h>

int main ()
{
	time_t start, end;
	char name[256];
	double diff;
	clock_t t1, t2;
	t1 = clock();		// ó�� �ð� ���ϱ� 
	time (&start);
	printf ("����� �̸��� �Է��Ͻÿ�: ");
	gets (name);
	time (&end);
	diff = difftime (end, start);
	printf ("�ȳ� %s!\n", name);
	printf ("����� �̸��� �Է��ϴµ� %.2lf�� �ɷȽ��ϴ�.\n", diff );

	t2 = clock() - t1;		// ���߽ð� ���ؼ� ���� 
	printf ("%.2f ms\n", (double)t2 / CLOCKS_PER_SEC);
	printf("%ld, %ld, %ld\n", t1, t2, CLOCKS_PER_SEC);
	return 0;
}
