#include <stdio.h>
unsigned int digit(int);

int main()
{
	int x;

	printf("정수 입력 : ");
	scanf("%d", &x);

	printf("%d는 %u자리\n", x, digit(x));
}

unsigned int digit(int value)
{
 	unsigned int digit_cnt=0;

	if(value < 0)
		value = -value;
	while(value>0) {
		digit_cnt++;
		value /= 10;
	}
	return digit_cnt;
} 
