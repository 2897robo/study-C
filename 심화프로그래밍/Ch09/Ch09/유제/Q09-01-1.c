#include <stdio.h> 

struct student {		// ����ü ���� 
	char name[20];	// �̸� 
	int ID_no, grade;	// �й�, �г� 
	char tel[20];	// ��ȭ��ȣ
	char email[30];	// �̸��� 
}; 

int main()
{
	struct student mem[3]= { 
		{"��浿", 20072356, 3, "010-2345-6789", "kdhong@naver.com"}, 
		{"�̼���", 20081234, 3, "011-9999-7727", "sllee@gmail.com"},
		{"�ϵ���", 20091557, 1, "010-9977-3345", "duha@nate.com"}};
		// ����ü �迭 ���� �� �ʱ�ȭ 

	int i;
	for (i=0; i<3; i++) { // ����ü �迭�� ���� ��� ���
		printf("%s %d %d %s %s\n", mem[i].name, mem[i].ID_no, 
			mem[i].grade, mem[i].tel, mem[i].email);
	}
	printf("\n"); 
}
