#include <stdio.h>
int gender(char *);

int main(void)
{
	printf("20194487 김기욱\n");
	char jumin[15], x;
	char genders[2][5] = {"여자", "남자"};
	printf("주민번호 입력 : ");
	scanf("%s", jumin);

	x = gender(jumin);
	printf("%s = %s\n", jumin,  genders[x]);
}

int gender(char *j) {
	int s;
	s = j[7] - '0';
	return (s%2);
}
