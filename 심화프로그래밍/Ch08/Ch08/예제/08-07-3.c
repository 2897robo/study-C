#include <stdio.h>
void sub(void)
{
	int count=1;	// �ڵ�(auto local) ���� 
	static int s_count=1;
	// ���������� ����� ����(static local)����
	printf("count=%d s_count=%d\n", count, s_count);
	count++;	// count ���� �Լ��� ������ ������
	s_count++; // s_count���� �״�� ������
} 

int main(void)
{
	int a;	// ����(auto local) ����
	for(a=1; a<=5; a++)
		sub();
}
