#include <stdio.h>
int main()
{
	/* õ��(����), ����(��) */ 
	char *cheongan[10] = { "��", "��", "��", "ͤ", "ˣ", "��", "ܰ", "��", "��", "��"};
	char *jiji[12] = {"��", "�", "��", "��", "�", "��", "��", "��", "��", "��", "��", "ڱ"};
	char *cheongan_hangul[10] = { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��"};
	char *jiji_hangul[12] = {"��", "��", "��", "��", "��", "��", "��",
				 "��", "��", "��", "��", "��"};
	char *tti[12] = {"������", "��", "��", "����", "��", "��", "ȣ����",
				 "�䳢", "��", "��", "��", "��"};
	int year, cheongan_mod, jiji_mod, y;

	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year); 
	cheongan_mod = year % 10;
	jiji_mod = year % 12;
	printf("%d�� ", year);
	printf("%s%sҴ(%s%s��) : %s��\n\n\n", *(cheongan+cheongan_mod),
		*(jiji+jiji_mod), *(cheongan_hangul+cheongan_mod),
		*(jiji_hangul+jiji_mod), *(tti+jiji_mod));
	for(y = year - 5; y<=year+5; y++)
	{
		cheongan_mod = y % 10;
		jiji_mod = y % 12;
		printf("%d�� ", y);
		printf("%s%sҴ(%s%s��) : %s��\n", *(cheongan+cheongan_mod),
			*(jiji+jiji_mod), *(cheongan_hangul+cheongan_mod),
			*(jiji_hangul+jiji_mod), *(tti+jiji_mod));
	}
}
/* 
 0 ˣ�  1 ����  2 ܰ��  3 ����  4 ����  5 ����  6 ����  7 ��ڱ  8 ����  9 ͤ� 
10 ˣ�� 11 ���� 12 ܰ� 13 ���� 14 ���� 15 ���� 16 ���� 17 ���� 18 ���� 19 ͤڱ 
20 ˣ�� 21 ��� 22 ܰ�� 23 ���� 24 ��� 25 ���� 26 ���� 27 ���� 28 ���� 29 ͤ�� 
30 ˣ�� 31 ��ڱ 32 ܰ�� 33 ��� 34 ���� 35 ���� 36 ��� 37 ���� 38 ���� 39 ͤ�� 
40 ˣ�� 41 ���� 42 ܰ�� 43 ��ڱ 44 ���� 45 ��� 46 ���� 47 ���� 48 ��� 49 ͤ�� 
50 ˣ�� 51 ���� 52 ܰ�� 53 ���� 54 ���� 55 ��ڱ 56 ���� 57 ��� 58 ���� 59 ͤ�� 
*/ 
