#include <stdio.h> 
#include <stdlib.h>

struct student {    // ����ü ���� 
	char *name; 
	int korean, english; 
}; 
int main()
{
	struct student *sp;	// ����ü ������ ���� ���� 
	sp = (struct student*)malloc(sizeof(struct student)); //�޸� �Ҵ�
	sp->name = "ȫ�浿";	// ����ü ������ ������ ������ ���
	sp->korean = 90;		// ������ ���� 
	sp->english = 95;
	printf("�̸�: %s, ����: %d, ����: %d\n", 
		sp->name, sp->korean, sp->english); 
	free(sp);
}
