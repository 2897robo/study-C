#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	char gender[10];
	unsigned int year, month, date, g;
	if (argc !=2) {
		printf("����� : \n\t mainargs �ֹι�ȣ\n");
		return 0;
	}
	sscanf(argv[1], "%2d%2d%2d", &year, &month, &date);
	g = argv[1][7] - '0';	// ������ ���ڷ� ��ȯ
	if(g%2)
		strcpy(gender, "����");
	else
		strcpy(gender, "����");
	printf("%d�� %d�� %d��, %s\n", year, month, date, gender);
}
