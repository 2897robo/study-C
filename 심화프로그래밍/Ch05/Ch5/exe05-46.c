#include <stdio.h>

int main()
{
	int x;
	unsigned int number, reverse=0, temp;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number);

	printf("  3         2         1\n");		// �ڸ����� �˾ƺ��� ���� ��ġ�� ����Ѵ�. 
	printf("21098765432109876543210987654321\n\n");

	for(x=0; x<32; x++) {		// ���ڸ��� �̵��ϸ鼭 1���� �ƴ��� �˻��Ͽ� �ش��ϴ� ���� ����Ѵ�. 
		printf("%d", ((number<<x) & (1<<31)) ? 1 : 0);
	}

	printf(" = %d\n", number);
	for(x=0; x<32; x++) {	// ���ڸ��� �̵��ϸ鼭 1���� �ƴ��� �˻��Ͽ� �ش��ϴ� ���� �ݴ�Ǵ� ���� ����Ѵ�. 
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
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &number);
	printf("  3         2         1\n");
	printf("21098765432109876543210987654321\n\n");
	itoa(number, bin, 2);
	printf("%032s = %u\n", bin, number);
	number = ~number;  // ��Ʈ �����ڸ� �̿��Ͽ� �����ϰ� ��Ʈ ������ų ���� �ִ�. 
	itoa(number, bin, 2);	// 2���� ���ڿ��� ��ȯ�Ѵ�. 
	printf("%032s = %u\n", bin, number);
}*/
