#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	unsigned int i, seed;
	seed = time(0); 	// ���� �ʱ�ȭ �Լ��� �Ű������� ������ �ð����� ����
	srand(seed);	// ���� �ʱ�ȭ

	for( i=0; i<10; i++)
		printf("%d, ", rand());		// �����߻�
}
