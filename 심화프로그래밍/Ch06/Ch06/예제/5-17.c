#include <stdio.h>
#include <string.h>
int main ()
{
	printf("20194487 ����");
	char str[] = "This is test string.", str2[100];
	char *pch;
	int len, p;
	len = strlen(str);	// ���ڿ��� ���� ȹ��
	pch = &str[len-1];	// ���ڿ��� �� �ٷ� �տ� ��ġ: NULL ���� �ٷ� ��
	strcpy(str2, str);	// ���� ���ڿ��� str2�� ����
	while (len >0) {		// str2�� str ���ڸ� �Ųٷ� ���̱�
		strncat(str2, pch, 1);		// �� ���� str2�� ���̱�
		pch--;		// ������ ������ �̵�
		len--;		// ���� �ϳ� ����
	}
	printf ("%s\n", str2);
}
