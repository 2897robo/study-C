#include <stdio.h>

typedef struct {		// ����ü ����
	char name[20];	// �̸�
	int ID_no, grade;	// �й�, �г�
	char tel[20];	// ��ȭ��ȣ
	char email[30];	// ��-����
} student; 		// ���ο� ������ �� student ����

int main()
{
	student mem[3]= { // ���ο� ������ ���� �̿��Ͽ� ������ �迭 mem ����
		{"��浿", 20072356, 3, "010-2345-6789", "kdhong@naver.com"}, 
		{"�̼���", 20081234, 3, "011-9999-7727", "sllee@gmail.com"},
		{"�ϵ���", 20091557, 1, "010-9977-3345", "duha@nate.com"}};
	student *m = mem;	// ����ü ������ ���� m�� �迭 ����
	int i;
	for (i=0; i<3; i++, m++) { // �����͸� �̿��Ͽ� �迭�� ���� ���
		printf("%s %d %d %s %s\n", m->name, m->ID_no,
			m->grade, m->tel, m->email);
	}
	printf("\n");
}
