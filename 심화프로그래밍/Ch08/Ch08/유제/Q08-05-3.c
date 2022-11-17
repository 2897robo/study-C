#include <stdio.h>
void dec2bin(int, unsigned int);

int main()
{
	int data;
	printf("정수 입력: ");
	scanf("%d", &data);
	dec2bin(data, 0x80000000);
}

void dec2bin(int x, unsigned int y)
{
	if( !y )
		return;
	if(x&y)
		printf("1");
	else
		printf("0");
	dec2bin(x, y>>1);
}
