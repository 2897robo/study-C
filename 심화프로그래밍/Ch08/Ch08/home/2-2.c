#include <stdio.h> 
void swap(int *, int *);    // �Լ��� ���� 

int main() 
{ 
	printf("20194487 ����\n");
	int x = 15, y = 37; 
	printf("�Լ� ���� �� �� x = %d, y = %d\n", x, y); 
	swap(&x, &y); 		// ������ ������ �ִ� ���� �ּҸ� �Ѱ��ش�. 
	printf("�Լ� ���� �� �� x = %d, y = %d\n", x, y);
} 

void swap(int *a, int *b) 
{ 
	printf("�Լ� �� ���� �� �� a = %d, b = %d\n", *a, *b); 
	*a ^= *b, *b ^= *a, *a ^= *b; 
	printf("�Լ� �� ���� �� �� a = %d, b = %d\n", *a, *b); 
}
