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

	if(count==1)
		printf("2�� �������̴�.\n");
	else
		printf("2�� �������� �ƴϴ�.\n");
}
