#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char c[30] = "This Is a Test Program!";
	for(i=0; i<strlen(c); i++) {	//���ڿ��� ���� ���ϴ� �Լ� strlen(���ڿ�);
		if(c[i] >= 'a' && c[i] <= 'z')	// �ҹ����̸�
			c[i] -= 32;	// �빮�ڷ� ����
		else if(c[i] >='A' && c[i] <= 'Z') // �빮���̸�
			c[i] += 32;	// �ҹ��ڷ� ����
	}
	puts(c);
}
