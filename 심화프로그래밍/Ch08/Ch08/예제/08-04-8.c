#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
void dec2bin(int, char *);

int main()
{
	int x = 298420394;
	char *binary;

	binary = malloc(40);		// �˳��ϰ� 40�ڸ� 
	dec2bin(x, binary);
	printf("%15d = %s\n", x, binary);

	x = INT_MAX;
	dec2bin(x, binary);
	printf("%15d = %s\n", x, binary);
	free(binary);
}

void dec2bin(int x, char *a) {
	int i;
	strcpy(a, "");
	// MSB���� ���ڸ��� 1���� 0���� �˻��Ѵ�.
	for(i=0; i < 32; i++, x<<=1)
		(INT_MIN & x) ? strcat(a,"1") : strcat(a,"0"); 	// ���ڿ��� �ϳ��� �߰��Ѵ�. 
}
