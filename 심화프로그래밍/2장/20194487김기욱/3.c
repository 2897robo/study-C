#include <stdio.h>

int main()
{
	printf("이름 : 김기욱, 학번 : 20194487 \n");

	int a, b, c, total;
	a = 150*3;
	b = 2100*5;
	c = 6300*3;
	total = 50000 - (a+b+c);

	printf("거스름돈은 %d원 입니다.\n", total);
}
