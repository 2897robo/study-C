#include <stdio.h>
#include <string.h>

int main ()
{
	char str[80];
	strcpy(str, "���� ���� ");
	strcat(str, "���ڿ��� ");
	strcat(str, "�����ϸ� ");
	strcat(str, "�̷��� �ȴ�.");
	puts(str);
}
