#include <stdio.h>
int main()
{
	char address[50], zipcode[20];
	printf("우편번호와 주소 입력 : ");
	scanf("%[0123456789-]%*c%[^\n]",	zipcode, address);
	printf("우편번호 : %s\n주소 : %s\n",zipcode, address);
}
