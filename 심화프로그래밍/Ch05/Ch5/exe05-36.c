#include <stdio.h>
#include <math.h>    //sqrt() �Լ��� ����ϱ� ���� ������� 

int main()
{
	int x, y, s, prime = 1 ; 

	printf("���ڸ� �Է��Ͽ� �ֽʽÿ� : "); 
	scanf("%d", &y); 
	s = (int)sqrt(y);

	for (x=2; x<=s; x++) {  // i�� 2���� ��Ʈy���� 
		if (y%x == 0) { 
			prime = 0; 
			break; 
		} 
	} 
	if (prime == 1) 
		printf(" %d�� �Ҽ��̴�\n", y); 
	else 
		printf(" %d�� �Ҽ��� �ƴϴ�\n", y); 
} 
