#include <stdio.h>

int last_day(int, int);	// �Լ� ����

int main()
{
	int year, month;		 // �Լ��� ��������

	printf("��, ���� �Է��Ͻÿ�(2011-4)"); 
	scanf("%d%*c%d", &year, &month); 

	printf("%d�� %d���� ������ %d���Դϴ�.\n",
		year, month, last_day(year, month) );	// �Լ� ȣ��
}

int last_day(int y, int m)
{
	int dates_per_month[] = {29, 31, 28, 31, 30, 31,
				30, 31, 31, 30, 31, 30, 31}; // ���� ����

	// 2���̰� �����̸� 29�� ��ȯ�ϱ� ���Ͽ� m�� 0���� �Ѵ�.
	if(m==2 && (y%400 == 0 || (y%100 != 0 && y%4 == 0)))
		m = 0;	
	return( dates_per_month[m] );	// ���� �ش��ϴ� ��¥�� ��ȯ�Ѵ�. 
}
