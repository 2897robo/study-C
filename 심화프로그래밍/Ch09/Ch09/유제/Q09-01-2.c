#include <stdio.h> 

struct Course {			// ����ü ���� 
	char ClassName[30];	// ������ �� 
	int ClassNo;		// ������ ��ȣ 
	char Classify[10];	// ���� ����:�̷� or �ǽ� 
	int Restrict;		// ���� ���� �ο� 
}; 

int main()
{
	struct Course crs[5]= { 		// ����ü �迭 ���� �� �ʱ�ȭ 
		{"C���", 100101, "�ǽ�", 40}, 
		{"JAVA", 100102, "�ǽ�", 40}, 
		{"������ ��ȸ��", 100103, "�̷�", 50}, 
		{"��ǻ�ͱ�����", 100104, "�̷�", 60}, 
		{"Microprocessor", 100105, "�̷�+�ǽ�", 30}};
	int i;

	for (i=0; i<5; i++) { // ����ü �迭�� ���� ��� ���
		printf("%-25s %6d %-10s %5d��\n", crs[i].ClassName,
			crs[i].ClassNo, crs[i].Classify, crs[i].Restrict);
	}
	printf("\n"); 
}
