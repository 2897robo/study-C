#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	double *array, *dp, *max, *min;
	int i;
	array = (double *)malloc(800); //double 100�� �޸� 
	srand(time(NULL));
	dp = array;
	for(i=0; i<100; i++, dp++) // �����͸� �����ϸ鼭 
		printf("%f ", *dp = rand()/(double)RAND_MAX); 
		// 0.0~1.0 ������ ���� 100�� �߻� 
	dp = array;
	max = min = dp;  // max, min�ʱⰪ�� �迭�� ù ��ҷ� ����
	dp++;	// ������ ����
	for(i=1; i<100; i++, dp++) { // 1�� ��Һ��� ������ ��
		if(*dp > *max)
			max = dp; // max ������ ����
		if(*dp < *min)
			min = dp; // min ������ ����
	}
	printf("\n\nmax = %f, min = %f\n", *max, *min);
	free(array);	//�Ҵ�� �޸� ����
}
