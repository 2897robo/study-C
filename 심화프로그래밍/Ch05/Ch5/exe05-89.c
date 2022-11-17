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
	printf("%d개", count);
	
}
