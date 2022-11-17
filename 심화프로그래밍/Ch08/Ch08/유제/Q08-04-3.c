#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *insert_comma(int);

int main()
{
	int input;
	char *r; 
	printf("���� �Է� : ");
	scanf("%d", &input);
	r = insert_comma(input);
	printf("%s\n", r);
}

char *insert_comma(int x) {
	int pos=0, cnt=0, sign=0;
	static char result[20];
	if(x < 0) {
		 sign = 1;
		 x = -x;
	}
	while(x >0) { // ���ڸ� ASCII�ڵ�� ����� ���� 
		result[pos++] = (x % 10) + 48;
		cnt++;		// ������ ���� ī��Ʈ 
		if( x >= 10 && (cnt % 3 == 0) )
		// ���� ���� 10���� Ŭ �� �� �ڸ��� ��� �޸� �ֱ� 
			result[pos++] = ',';
		x /= 10;
	}
	if(sign)	// �����̸� 
		result[pos++] = '-';		// '-' ��ȣ �ֱ� 
	result[pos] = '\0';	// ���ڿ��� �������� �� ���� �ֱ� 

	return ((char *)strrev(result));	
		// ���ڿ� ������ �Լ� ȣ��, strrev�� ǥ���Լ��� �ƴ�. 
}
