#include <stdio.h>
int gender(char *);

int main(void)
{
	printf("20194487 ����\n");
	char jumin[15], x;
	char genders[2][5] = {"����", "����"};
	printf("�ֹι�ȣ �Է� : ");
	scanf("%s", jumin);

	x = gender(jumin);
	printf("%s = %s\n", jumin,  genders[x]);
}

int gender(char *j) {
	int s;
	s = j[7] - '0';
	return (s%2);
}
