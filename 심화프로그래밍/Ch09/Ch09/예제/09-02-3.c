#include <stdio.h> 
#include <stdlib.h> 
struct student { 
	char name[20]; 
	int korean, english; 
}; 

void disp1(struct student aa) {		// ����ü ������ �Ű������� ���� 
	printf("%s %d %d \n", aa.name, aa.korean, aa.english); 
}

void disp2(struct student *bb) { 		// ����ü �����͸� �Ű������� ���� 
	printf("%s %d %d \n", bb->name, bb->korean, bb->english); 
} 

int main()
{ 
	struct student hong={"Hong Gil Dong", 90, 80}; // ����ü ���� ���� 

	disp1(hong); 		// ����ü ������ �Լ��� �Ű������� ��� 
	disp2(&hong); 		// ����ü ������ �ּ�(������)�� ���� 
}
