#include <stdio.h>
#include <string.h>
int main(int argc, char* argv[])
{
	char gender[10];
	unsigned int year, month, date, g;
	if (argc !=2) {
		printf("사용방법 : \n\t mainargs 주민번호\n");
		return 0;
	}
	sscanf(argv[1], "%2d%2d%2d", &year, &month, &date);
	g = argv[1][7] - '0';	// 성별을 숫자로 변환
	if(g%2)
		strcpy(gender, "남자");
	else
		strcpy(gender, "여자");
	printf("%d년 %d월 %d일, %s\n", year, month, date, gender);
}
