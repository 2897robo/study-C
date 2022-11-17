#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	double *array, *dp, *max, *min;
	int i;
	array = (double *)malloc(800); //double 100개 메모리 
	srand(time(NULL));
	dp = array;
	for(i=0; i<100; i++, dp++) // 포인터를 증가하면서 
		printf("%f ", *dp = rand()/(double)RAND_MAX); 
		// 0.0~1.0 사이의 난수 100개 발생 
	dp = array;
	max = min = dp;  // max, min초기값을 배열의 첫 요소로 설정
	dp++;	// 포인터 증가
	for(i=1; i<100; i++, dp++) { // 1번 요소부터 끝까지 비교
		if(*dp > *max)
			max = dp; // max 포인터 대입
		if(*dp < *min)
			min = dp; // min 포인터 대입
	}
	printf("\n\nmax = %f, min = %f\n", *max, *min);
	free(array);	//할당된 메모리 해제
}
