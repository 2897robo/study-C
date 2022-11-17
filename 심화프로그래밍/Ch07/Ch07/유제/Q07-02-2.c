#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	double *array[5], *ap, **app;
	int i, j;
	app = array;
	for(i=0; i<5; i++) 	// 5행 데이터 저장공간 생성  
		*app++ = (double *)malloc(80); //double 10개 
	srand(time(0));
	app = array;
	for(i=0; i<5; i++) {
		ap = *app++;
		for(j=0; j<10; j++)	// 각 행에 데이터 10개 생성 저장 
			*ap++ =rand()/(RAND_MAX/2.0);
			// 0.0 ~ 2.0사이의 난수 발생
	}
	app = array;
	for(i=0; i<5; i++) {
		ap = *app++;
		printf("\n%p: %p\n", app, ap); // 포인터 값 출력
		for(j=0; j<10; j++)	// 각 행에 데이터 10개 생성 저장 
			printf("%4.3f  ", *ap++);
			//저장된 데이터 출력
		printf("\n");
	}
}
