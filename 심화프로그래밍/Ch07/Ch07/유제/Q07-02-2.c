#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	double *array[5], *ap, **app;
	int i, j;
	app = array;
	for(i=0; i<5; i++) 	// 5�� ������ ������� ����  
		*app++ = (double *)malloc(80); //double 10�� 
	srand(time(0));
	app = array;
	for(i=0; i<5; i++) {
		ap = *app++;
		for(j=0; j<10; j++)	// �� �࿡ ������ 10�� ���� ���� 
			*ap++ =rand()/(RAND_MAX/2.0);
			// 0.0 ~ 2.0������ ���� �߻�
	}
	app = array;
	for(i=0; i<5; i++) {
		ap = *app++;
		printf("\n%p: %p\n", app, ap); // ������ �� ���
		for(j=0; j<10; j++)	// �� �࿡ ������ 10�� ���� ���� 
			printf("%4.3f  ", *ap++);
			//����� ������ ���
		printf("\n");
	}
}
