#include <stdio.h> 
#include <string.h> 

struct member {		// ����ü ���� 
	char name[20];	// �̸� 
	char gender;	// ���� : 'M', 'F'�� ���� 
	int age;		// ���� 
	char level[20];	// ���� 
}; 

int main()
{
	struct member members[5]= { {"ȫ�浿", 'M', 49, "����"}, 
		{"�̸���", 'M', 25, "���"}, {"�Ӳ���", 'M', 39, "����"}, 
		{"������", 'F', 28, "����"}, {"������", 'M', 43, "�̻�"}};
		// ����ü �迭 ���� �� �ʱ�ȭ 
	int i;
	char name[20];

	for (i=0; i<5; i++) { // 40�� �̻��� ���� ��� ã�� 
		if (members[i].gender == 'M' && members[i].age > 40) 
			printf("�̸� : %s \n���� : %s\n",
			    members[i].name, members[i].level);
	}
	printf("\n"); 

	printf("�˻��� ���� �̸� �Է� : ");	// ã���� �ϴ� ���� �̸� �Է� 
	scanf("%s", name); 
	for (i=0; i<5; i++) {		// �ش�Ǵ� ���� �˻� �� ��� 
		if (strcmp(members[i].name, name) == 0)
		     printf("�̸� : %s \n���� : %s\n���� : %d\n",
		     members[i].name, members[i].level, members[i].age); 
	}
}
