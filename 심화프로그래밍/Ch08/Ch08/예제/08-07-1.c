#include <stdio.h>
int main(void)
{
	auto int a=5, b=10;	// �Լ� �������� �������� ���� 
	{ // ��� ����
		int hap;	// ��� �������� �������� hap ���� 
		hap = a + b;
		printf("%3d\n", hap);
	} // ��� ��
	printf("a=%d, b=%d\n", a, b);
	printf("hap=%d\n", hap);
	// ��� �ۿ����� hap������ ����� �� ����:������ �� error �߻�
} // �ڵ� ������ �� ������ ���� ����̳� �Լ��� ����� �����
