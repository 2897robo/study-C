#include <stdio.h>
#include <math.h>
#define pi 3.141593

int main()
{
	int x, y, sin_value[37], cos_value[37];
	static char graph[37][41];
	
	for(x=0; x<37; x++) {	// �迭�� sine �� �����ϴ� ���� 
		sin_value[x] = (int)(sin(pi*x*10/180)*20)+20; 
		cos_value[x] = (int)(cos(pi*x*10/180)*20)+20; 
	}

	for(x=0; x<37; x++)	// x�� ǥ�� 
		graph[x][20] = '-';

	for(y=0; y<41; y++)	// y�� ǥ�� 
		graph[0][y] = '|';

	for(x=0; x<37; x++) {
		graph[x][sin_value[x]] = 's';	// �迭�� sine �� ��ġ�� 's'�� �����ϴ� ���� 
		graph[x][cos_value[x]] = 'c';	// �迭�� cosine �� ��ġ�� 'c'�� �����ϴ� ���� 
	}

	printf("\n");
	for(y=40; y>=0; y--) {		// ����� �׷��� ��� 
		for(x=0; x<37; x++)	// sin ��ġ�� '*'���, �̸� �迭�� ������ �� ��. 
			printf("%2c", graph[x][y]);
		printf("\n");
	}
}
