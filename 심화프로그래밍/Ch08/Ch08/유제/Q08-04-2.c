#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int WordMatchCount(char *, char *);

int main()
{
	char *str, count=0, search[10];
	str = (char *)malloc(400);
	strcpy(str, "ȫ�浿���� ����� ���� �ѱ��� ��ǥ ����, �� �Ƿο� ������ ����� �� �Ҽ��� ���Ѵ�."
				" ��û��, �������� ���Ҿ� �ѱ��� ��ǥ �����Ҽ��� ������.");
	printf("�˻��� �ܾ �Է��Ͻÿ� : ");
	scanf("%s", search);
	count = WordMatchCount(str, search);
	printf("\"%s\"��(��) %d�� ����.\n", search, count);
 	free(str);
}

int WordMatchCount(char *s, char *w) {
	char count=0;
	while(s) {
		s = strstr(s, w);
		if(s) {
			count++;
			s += strlen(w);
		}
	}
	return count;
}
