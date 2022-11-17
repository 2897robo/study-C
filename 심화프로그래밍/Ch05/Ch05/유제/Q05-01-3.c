#include <stdio.h>
int main()
{
	int n, reverse = 0;
	printf("정수를 입력하시오 : \n");
	scanf("%d",&n);

	while (n)
	{
		reverse *= 10;
		reverse += n%10;
		n /= 10;
	}
	printf("거꾸로 만든 수 = %d\n", reverse);
}
