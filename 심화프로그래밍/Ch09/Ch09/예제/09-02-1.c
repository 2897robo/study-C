#include <stdio.h> 
#include <stdlib.h> 

struct student {    // ����ü ���� 
	char *name; 	// ����ü ����� ������ ����
	int korean; 
	int english; 
}; 

int main()
{
	struct student kdhong;		// ����ü ���� kdhong ���� 
	struct student *sp = &kdhong;	// ����ü ������ ���� ���� 

	sp->name = "ȫ�浿";	// ����ü ������ ������ ��� �׼���
	sp->korean = 90;		// ������ ���� 
	(*sp).english = 95;	// ���� �׼����� (*����ü ������ ����).��� 

	printf("�̸� : %s\n", sp->name); 
	printf("���� : %d\n", sp->korean); 
	printf("���� : %d\n", sp->english); 
}
