#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *str, *pos, count=0, search[10];
	str = (char *)malloc(400);
	strcpy(str, "ȫ�浿���� ����� ���� �ѱ��� ��ǥ ����, �� �Ƿο� ������ �����"
" �� �Ҽ��� ���Ѵ�. ��û��, �������� ���Ҿ� �ѱ��� ��ǥ �����Ҽ��� ������.");

	printf("�˻��� �ܾ �Է��Ͻÿ� : ");
	scanf("%s", search);
	pos = str;
	while(pos) {
		pos = strstr(pos, search);
		if(pos) {
			count++;
			pos += strlen(search);
		}
	}
	printf("\"%s\"��(��) %d�� ����.\n", search, count);
 	free(str);
}
