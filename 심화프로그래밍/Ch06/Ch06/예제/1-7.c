#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	printf("20194487 ����");
	int lotto[45], shuffle, x, y;
	srand(time(0));  // ���� �ʱ�ȭ
	for (x=0; x<45; x++)
 		lotto[x] = x+1; // 1~45���� �迭�� ����
	// �迭�� ����� �ζ� ��ȣ�� 5000�� ���´�.
	for (shuffle = 0; shuffle <5000; shuffle++ ) {
		x = rand()%45; // ��ȯ�� ù ��° ���� ��ġ
		y = rand()%45; // ��ȯ�� �� ��° ���� ��ġ
		lotto[x] = lotto[x] + lotto[y] - (lotto[y] = lotto[x]);
		// ���õ� �� ���� ��ġ ��ȯ 
	}
	// ó�� 6��(�� �������� �̵��� ��ȣ)�� ��ȣ�� ����
	for (x=0; x<5; x++)
		for (y=x+1; y<6; y++) //���Ͽ� ��ġ ��ȯ
			if (lotto[x] > lotto[y])
				lotto[x] = lotto[x] + lotto[y] - (lotto[y] = lotto[x]);

	// ó�� 6���� ���õ� ��ȣ�� ��� 
	for (x=0; x<6; x++)
		printf(" %d  ", lotto[x]);
	printf("\n");
}
