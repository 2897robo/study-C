#include <stdio.h>
int NoOfDivisor(int);

int main()
{
	printf("20194487 ����\n");
 	int i;
 	for(i=1; i<=20; i++)
 		printf("%d�� ����� ���� = %d\n", i, NoOfDivisor(i));
}

// �Լ� ����, �Լ��� ������ ��:int, �Լ��̸�:NoOfDivisor, �Ű�����: �ϳ��� int��
// ����� ������ ���� �� ���� ��ȯ�Ѵ�. n: ���μ�
int NoOfDivisor(int n)
{
	int count=0, i;	// NoOfDivisor�Լ��� �������� ����
 	for(i=1; i<=n/2; i++)	// 1���� n/2���� �˻��Ͽ� ����̸� ī��Ʈ
 		if(n%i == 0)
 			count++;
	count++;		// �ڱ� �ڽ� ī��Ʈ
	return count;  // �����ȯ, ��ȯ ���� ������ ���� �Լ��� ������ ���� ���ƾ� �Ѵ�.
}
