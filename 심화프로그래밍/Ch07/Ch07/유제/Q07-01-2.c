#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int *array[5], *ap, **app, i, j;
	app = array;
	for(i=0; i<5; i++) 	// 5�� ������ ������� ����  
		*app++ = (int *)malloc(40); 	//���� 10�� 
	srand(time(0));
	app = array;
	for(i=0; i<5; i++) {
		ap = *app++;
		for(j=0; j<10; j++)	// �� �࿡ ������ 10�� ���� ���� 
			*ap++ =rand()%101; // 0~100���� ���� �߻�
	}
	app = array;
	for(i=0; i<5; i++) {
		ap = *app++;
		printf("\n%p: %p\n", app, ap); // ������ �� ���
		for(j=0; j<10; j++)	// �� �࿡ ������ 10�� ���� ���� 
			printf("%3d  ", *ap++); //����� ������ ���
		printf("\n");
	}
}
