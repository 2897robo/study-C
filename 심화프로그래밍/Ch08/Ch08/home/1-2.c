#include <stdio.h>
double CircleArea(double, double);

int main()
{
	printf("20194487 ����\n");
 	double base=15.4, height=20.8;	// main�Լ��� ��������
	printf("�ﰢ���� ���� = %f\n", CircleArea(base, height));	// �Լ� ȣ��
}

double CircleArea(double b, double h)
{	// ���������� ������� �ʾҴ�.
	return ( b * h / 2.0 );	// ��� �� ��ȯ
}
