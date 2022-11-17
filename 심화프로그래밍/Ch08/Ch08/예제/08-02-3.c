#include <stdio.h>

void bubble(int *p, int N);
int compare(int *m, int *n);

int main(void)
{
	int arr[10] = { 43, 86, 31, 52, 13, 98, 48, 18, 75, 23 };
	int i;
	printf("\n");
	for (i = 0; i < 10; i++)			// �����ϱ� ���� ����Ѵ�.
		printf("%d ", arr[i]);

	bubble(arr,10);				// �����Լ� ȣ��
	printf("\n");

	for (i = 0; i < 10; i++)			// �����ϰ� ���� ����Ѵ�.
		printf("%d ", arr[i]);
	printf("\n");
}

void bubble(int *p, int N) {		// ���� �����Ѵ�.
	int i, j, t;
	for (i = N-1; i >= 0; i--) {
		for (j = 1; j <= i; j++) {
			if (compare(p+j-1, p+j)) {	// �� ���� ���ϴ� �Լ� ȣ��
				t = *(p+j-1);			// ������ ��ȯ
				*(p+j-1) = *(p+j);
				*(p+j) = t;
			}
		}
	}
}

int compare(int *m, int *n) {	// ũ�⸦ ���Ͽ� ���� ���� ũ�� 1�� �׷��� ������
	return (*m > *n);			// 0�� ��ȯ�Ѵ�.
}
