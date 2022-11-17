#include <stdio.h>

int main()
{
	int dec, count=0;
	unsigned int bin=0x80000000;
	
	printf("10진정수를 입력하시오: ");
	scanf("%d", &dec);

	while(bin){
		if(bin & dec)
			count++;
		bin>>=1;
	}

	if(count==1)
		printf("2의 제곱수이다.\n");
	else
		printf("2의 제곱수가 아니다.\n");
}
