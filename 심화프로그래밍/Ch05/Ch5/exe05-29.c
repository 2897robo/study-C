#include <stdio.h>

int main()
{
	char start, end;

	end = 'A';
	while( end <= 'Z' ) { // Z�� ������ ������ ������ �ݺ��Ѵ�. 
		start = 'A';	// ��� ���� ó���� A�� �����Ѵ�. 
		while(start <= end) { // �� �ٿ� ��µǴ� ���ڵ�: A���� ������ ���ڱ���. 
			printf("%c", start);
			start++;
		}
		end++;	// �� �ٿ� ��µ� ������ ���ڸ� �ϳ� �����Ѵ�. 
		printf("\n");
	}
}
