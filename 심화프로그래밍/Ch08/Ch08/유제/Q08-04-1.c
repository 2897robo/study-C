#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void StrSplit(char*, char*, char*);

int main()
{
	char *str, temp, in_str=0, *pos, *s2;
	int i=0, len;
	str = (char *)malloc(100);
	s2 = (char *)malloc(100);

	strcpy(str,"Use Split to separate parts from a string.");
	StrSplit(str, s2, "parts");
	printf( "%s\n", str);
	printf( "%s\n", s2);
	free(str);
	free(s2);
}

void StrSplit(char *s, char *t, char *p) {
	s = strstr(s, p); //�и��� ���� ã��
	strcpy(t, s);	// �� �κ��� t�� ����
	*s = '\0';	// �� �κ��� ���ڿ� ���� �� ����
}
// s: ���� ���ڿ�, t: �и��� �� �κ� ���ڿ� ����, 
// p: �и��� ���� �κ� ���ڿ�
// p��� ���ڿ��� ã�� �� ���ڿ��� ���� �ٸ� ���ڿ��� ����
// �� �κ��� p��� ���ڿ� �ٷ� �ձ���

