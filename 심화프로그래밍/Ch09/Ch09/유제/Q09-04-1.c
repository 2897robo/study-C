#include <stdio.h>

int isBigEndian(void);
int isLittleEndian(void);

typedef union {
	int i;		// 4바이트
	char c[4];	// 4바이트
} endian;

int main()
{
	if(isBigEndian())
		printf("Big Endian\n");
	else 
		printf("Little Endian\n");
	if(isLittleEndian())
		printf("Little Endian\n");
	else 
		printf("Big Endian\n");
}

int isBigEndian(void) {
	endian x;
	x.i = 1;
	if(x.c[3])
		return 1;	// Big Endian 
	else 
		return 0;	// Little Endian 
}

int isLittleEndian(void) {
	endian x;
	x.i = 1;
	if(x.c[0])
		return 1;	// Little Endian 
	else 
		return 0;	// Big Endian 
}
