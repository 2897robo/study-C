#include <stdio.h>

int main()
{
	int x;
	unsigned int number, reverse=0, temp;

	printf("정수를 입력하시오 : ");
	scanf("%d", &number);

	printf("  3         2         1\n");		// 자리수를 알아보기 쉽게 위치를 출력한다. 
	printf("21098765432109876543210987654321\n\n");

	for(x=0; x<32; x++) {		// 한자리씩 이동하면서 1인지 아닌지 검사하여 해당하는 값을 출력한다. 
		printf("%d", ((number<<x) & (1<<31)) ? 1 : 0);
	}

	printf(" = %d\n", number);
	for(x=0; x<32; x++) {	// 한자리씩 이동하면서 1인지 아닌지 검사하여 해당하는 값의 반대되는 값을 출력한다. 
		temp = ((number<<x) & (1<<31)) ? 0 : 1;
		printf("%d", temp);
		reverse = (reverse<<1) + temp;
	}
	printf(" = %u\n", reverse);
} 
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number; 
	char bin[33];
	printf("정수를 입력하시오 : ");
	scanf("%d", &number);
	printf("  3         2         1\n");
	printf("21098765432109876543210987654321\n\n");
	itoa(number, bin, 2);
	printf("%032s = %u\n", bin, number);
	number = ~number;  // 비트 연산자를 이용하여 간단하게 비트 반전시킬 수도 있다. 
	itoa(number, bin, 2);	// 2진수 문자열로 변환한다. 
	printf("%032s = %u\n", bin, number);
}*/
