#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
	int x, y, i;
	char a[30], b[30], t[30];

	printf("���� �� ���� �Է��Ͻÿ� : ");
	scanf("%[^, ]%[, ]%[^\n]", a, t, b);

	printf("%s, %s\n", a, b);
	
	for(i=0; i<strlen(a); i++) {	// a���ڿ����� �����̿��� �ٸ� ���� ����Ǿ� �ִ��� �˻� 
		if( !(isdigit(a[i]) ) ) {
			printf("Error!!!\n");
			exit(0);
		}
	}

	for(i=0; i<strlen(b); i++) {	// b���ڿ����� �����̿��� �ٸ� ���� ����Ǿ� �ִ��� �˻� 
		if( !(isdigit(b[i]) ) ) {
			printf("Error!!!\n");
			exit(0);
		}
	}

	x = atoi(a);	// ���ڿ��� �� ���ڸ� ������ ��ȯ�ϴ� ǥ���Լ� atoi() 
	y = atoi(b);

	printf("%d * %d = %d\n", x, y, x*y);
}
