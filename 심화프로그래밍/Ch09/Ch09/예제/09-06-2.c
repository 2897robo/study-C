#include <stdio.h>

typedef struct {
	unsigned short Grade:4;		// �г� 4��Ʈ
	unsigned short Class:5;		// �� 5��Ʈ
	unsigned short Number:7;		// ��ȣ 7��Ʈ
} student;

int main()
{
	unsigned char x;
	student s;
	printf("�г� �Է�(1~12): ");
	scanf("%u", &x);		// ��Ʈ �ʵ�� ���������� �ּҰ� �����Ƿ�
	s.Grade = x;		// �ٸ� ������ �о �ٽ� ��Ʈ�ʵ忡 ����
			// ��, ��Ʈ�ʵ�� ���� scanf�� ����� �� ����.
	printf("�� �Է�(1~31): ");
	scanf("%u", &x); 
	s.Class = x;
	printf("��ȣ �Է�(1~127): ");
	scanf("%u", &x);
	s.Number = x;
	printf("%u�г� %u�� %d��\n", s.Grade, s.Class, s.Number);
	s.Grade = 10, s.Class = 15, s.Number = 20;
	printf("%u�г� %u�� %d��\n", s.Grade, s.Class, s.Number);
	printf("����ü�� ũ��: %dByte\n", sizeof(student));
}
