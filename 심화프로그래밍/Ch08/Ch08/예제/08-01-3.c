#include <stdio.h> 
int gcd(int, int);  // �Լ� ����(prototype) 

int main()
{
	int i, j; 
	printf("�ִ������� ���� �� ���� �Է��Ͻÿ�. "); 
	scanf("%d%*c%d", &i, &j); 
	printf("�� ���� �ִ� ������� %d�̴�.\n", gcd(i, j)); 
	printf("48�� 56�� �ִ� ������� %d�̴�.\n", gcd(48, 56)); 
}

int gcd(int a, int b)
{ 
	int z=1;
	while(z != 0) { // �������� �̿��� ��Ŭ���� ȣ���� 
		z = a % b;
		a = b;
		b = z;
	}
	return a;
}
