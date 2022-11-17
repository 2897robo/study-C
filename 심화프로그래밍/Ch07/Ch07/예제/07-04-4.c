#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int X_DIM=16;
int Y_DIM=5;
int Z_DIM=3;

int main( )
{
	char *space, ***Arr3D;
	int y, z;
	ptrdiff_t diff;
	/* 3���� �迭 ��ü�� ���� ���� Ȯ�� */
	space = malloc(X_DIM * Y_DIM * Z_DIM * sizeof(char));
	/* �������� �迭�� ���� ���� �Ҵ�, �̵� ������ ��������� 2���� �迭��
	ù ��° ��Ҹ� ����Ʈ�Ѵ�. ��, �������� ������ 2���� �迭�̴�. */
	Arr3D = malloc(Z_DIM * sizeof(char **));
	/* �࿡ ���� ������ �迭�� ���� �Ҵ�� ������ �����Ѵ�. */
	for (z = 0; z < Z_DIM; z++) {
		Arr3D[z] = malloc(Y_DIM * sizeof(char *));
		/* �̵� ������ �������� �� ���� ù ��° ��Ҹ� ����Ʈ�Ѵ�. 
		��, ���� �Ҵ�� �� ���� �迭 ������ �ִ� ù ��° ����̴�. */
		for (y = 0; y < Y_DIM; y++) {
		    Arr3D[z][y] = space + (z*(X_DIM * Y_DIM) + y*X_DIM);
		}
	}
	/* ����, 3���� ������ ���������� ��� ����Ǵ��� �迭�� �ε�����
	���ؼ� 3���� �迭������ �� �ּҸ� �����غ���. */
	for (z = 0; z < Z_DIM; z++) {
		printf("�迭 %d�� ��ġ�� %p\n", z, *Arr3D[z]);
		for ( y = 0; y < Y_DIM; y++) {
			printf(" �迭 %d, �� %d�� �����ּ�: %p", z, y, 
				Arr3D[z][y]);
			diff = Arr3D[z][y] - space;
			printf(" diff = %4d ",diff);
			printf(" z = %d y = %d\n", z, y);
		}
	}
	free(space);
	free(Arr3D);
}
