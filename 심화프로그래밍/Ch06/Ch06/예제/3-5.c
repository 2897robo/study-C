#include <stdio.h>
#include <string.h>
#define SIZE 51
int main()
{
	printf("20194487 ����");
	int x[SIZE]={0,}, y[SIZE]={0,}, z[SIZE]={0,}, i, j, carry;
	char a[SIZE], b[SIZE], c[SIZE];
	printf("ù ��° �� �Է�:");
	scanf("%[0123456789]", a);		// ���ڸ� �Է¹ޱ�
	fflush(stdin);			// �Է���ġ ���� ����
	printf("�� ��° �� �Է�:");
	scanf("%[0123456789]", b);
	fflush(stdin);
	for(i=strlen(a)-1, j=SIZE-1; i>=0; i--, j--)
		x[j] = a[i] - '0';		// a�� ���������� ���ڸ� ���ڷ� ��ȯ 
	for(i=strlen(b)-1, j=SIZE-1; i>=0; i--, j--)
		y[j] = b[i] - '0';		// b�� ���������� ���ڸ� ���ڷ� ��ȯ 

	carry = 0;		// ĳ���� 0���� �ʱ�ȭ 
	for(i=SIZE-1; i>=0; i--) {		// ���� ���� 
		z[i] = x[i] + y[i] + carry;		// ���� 
		carry = z[i] / 10;				// ĳ�� ��� 
		z[i] = z[i] % 10;				// ���� �ڸ� �� ��� 
	}

	for(i=0; i<SIZE; i++)	// ��� ��� ó�� 0�� �ƴ� ������ �̵� 
		if(z[i] != 0)		// ó�� 0�� �ƴ� ���� ������ ������ �����. 
			break;
	// ó�� 0�� �ƴ� ���������� ���ڷ� ��ȯ�Ͽ� ���ڿ� c�� �����Ѵ�. 
	for(j=0; i<SIZE; i++, j++)
		c[j] = (char)z[i] + '0';	// ��� ����� ���ڷ� ��ȯ 
	c[j] = 0;		// NULL ���� 
	printf("\n%52s\n+ %50s\n= %50s\n", a, b, c); // ��� ��� 
}
