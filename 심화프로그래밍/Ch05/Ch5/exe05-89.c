#include <stdio.h>

int main()
{
	int dec, count=0;
	unsigned int bin=0x80000000;
	
	printf("10�������� �Է��Ͻÿ�: ");
	scanf("%d", &dec);
	
	while(bin){
		if(bin & dec)
			count++;
		bin>>=1;
	}
	printf("%d��", count);
	
}
