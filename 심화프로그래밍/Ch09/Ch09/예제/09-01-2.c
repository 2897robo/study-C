#include <stdio.h> 

struct score {    // ����ü ����. struct ����ü�� 
	char name[30]; 
	int kor; 
	int eng; 
	int math; 
	int total; 
	float avr; 
}; 

int main()
{
	struct score Class[3] = { {"������", 95, 87, 97, },
		   { "�ڱ⵿", 99, 89, 80, }, 
		   { "ȫ�浿", 88, 77, 66, }}; // ����ü �迭 ���� �� �ʱ�ȭ
	int i; 
	for (i=0; i<3; i++) { 
		Class[i].total = Class[i].kor + Class[i].eng + Class[i].math; 
		Class[i].avr = (float)Class[i].total/3.; 

		printf("�̸� : %s, ���� : %d, ���� : %d, ����: %d, ",
		    Class[i].name, Class[i].kor, Class[i].eng, Class[i].math);
		printf("���� : %d, ��� : %5.1f\n\n", Class[i].total,
			Class[i].avr);
    }
}
