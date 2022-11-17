#include <stdio.h>
#include <math.h>
double triangle_area(int, int, int); /* �Լ� ����(prototype) */ 
int is_triangle(int, int, int);

int main()
{
	int i, j, k;
	printf("ù ��° ���� �Է��Ͻÿ� : ");
	scanf("%d", &i);
	printf("�� ��° ���� �Է��Ͻÿ� : ");
	scanf("%d", &j);
	printf("�� ��° ���� �Է��Ͻÿ� : ");
	scanf("%d", &k);
	if(is_triangle(i, j, k))
		printf("�ﰢ���� ������ %f�̴�.\n", triangle_area(i, j, k));
}

double triangle_area(int x, int y, int z) {
	double s;
	s = (x+y+z)/2.0;
	return sqrt(s*(s-x)*(s-y)*(s-z));
}

int is_triangle(int i, int j, int k) {
	if( i <= 0 || j <= 0 || k <= 0) // �� ���̶� 0�����̸� �ﰢ���� �ƴ� 
		return 0;
	// �� ���� ������ ���� �� ���� ������ �պ��� ������ 
	if( i+j < k || i+k < j || j+k < i )
		return 0;		// �ﰢ���� �ƴϰ�, 
	else 
		return 1;		// �׷��� ������ �ﰢ���̴�. 
}
