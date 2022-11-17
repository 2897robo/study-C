#include <stdio.h>
int main(void)
{
	int type;

	type = sizeof(char);
	printf("char형의 크기는 %d바이트입니다.\n", type);

	type = sizeof(short);
	printf("short형의 크기는 %d바이트입니다.\n", type);

	type = sizeof(int);
	printf("int형의 크기는 %d바이트입니다.\n", type);

	type = sizeof(long);
	printf("long형의 크기는 %d바이트입니다.\n", type);

	type = sizeof(long long);
	printf("long long형의 크기는 %d바이트입니다.\n", type);

	type = sizeof(float);
	printf("float형의 크기는 %d바이트입니다.\n", type);

	type = sizeof(double);
	printf("double형의 크기는 %d바이트입니다.\n", type);

	type = sizeof(long double);
	printf("long double형의 크기는 %d바이트입니다.\n", type);


	return 0;
}

