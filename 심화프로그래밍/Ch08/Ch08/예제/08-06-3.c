#include <stdio.h>
#include <string.h>
int bin2dec(char *);		// ���� ����ߴ� �Լ�
int is32digit_binary(char *);	// ���� ����ߴ� �Լ�

int main(int argc, char* argv[])
{ 
	char a[100];
	if (argc !=2) {
		printf("����� : \n\t mainargs 2����\n"); 
		return 0; 
	} 
	sscanf(argv[1], "%[01]", a); // 0�� 1�� �Է����� �޾Ƶ���. 
	if (is32digit_binary(a))
	    printf("2���� %s�� 10���� ���� %d\n", a, bin2dec(a));
}

/* 2���� �迭�� 10������ �����Ű�� �Լ� */ 
int bin2dec(char *x)
{
	int i, dec=0, exp=1, size;
	size = strlen(x);
	for (i=size-1; i>=0; i--) { // 2���� �ڿ������� ī��Ʈ �Ѵ�.
		// �ش��ϴ� �ڸ����� 1�� ���� 2�� �ش� ������ �����ش�. 
		if(x[i] == '1')
			dec |= exp;
		exp <<= 1; // ������ �� ���� �� ������ 2�� �����ش�. 
	}
	return dec;
}
// ���� �ۼ��ߴ� �Լ��� �״�� ����Ͽ���

/* ���ڿ� x�� ����� �ԷµǾ������� �˻��ϴ� �Լ� */ 
int is32digit_binary(char *x)
{
	if( strlen(x) > 32 ) {
		printf("32�ڸ��� �ʰ��Ͽ����ϴ�!!!\n");
		return 0;
	}
	return 1;
} // ���� �ۼ��ߴ� �Լ��� �״�� ����Ͽ���
