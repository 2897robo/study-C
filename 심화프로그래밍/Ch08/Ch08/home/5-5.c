#include <stdio.h>
void dec2bin(int);

int main()
{
	printf("20194487 김기욱\n");
	int data;
	printf("정수 입력: ");
	scanf("%d", &data);
	dec2bin(data);
}

void dec2bin(int x)
{
	if( !x )
		return;
	dec2bin(x/2);
	printf("%d", x%2);
}
