#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
	int cnt_a =0, cnt_b = 0, i=0;
	char str[100];
	printf("���� ������ �Է��Ͻÿ� : "); 
	gets(str);
	
	while(str[i]) {
		if(isalnum(str[i]))
			cnt_a++;
		if(isspace(str[i])|| ispunct(str[i]))
			cnt_b++;
		i++;
	}
	printf("�������� ���� : %d\n", cnt_a);
	printf("���� �Ǵ� ���ι����� ���� : %d\n", cnt_b);
}
