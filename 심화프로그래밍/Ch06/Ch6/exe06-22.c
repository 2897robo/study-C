#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char danwi[][4] = {"", "��", "��", "õ", "��", "��", "��", "õ",
			"��", "��", "��", "õ", "��", "��", "��", "õ",
			"��", "��", "��", "õ",	"��", "��", "��", "õ"};
	char su[10][4] = {"��", "��", "��", "��", "��", "��", "��", "ĥ", "��", "��"};
	char in[50];
	int length, i, cnt=0;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%[0123456789]", in);		// ���ڸ� ���ڿ��� �Է¹޴´�. 

	length = strlen(in);

	for(i=0; i<length; i++) {
		if(in[i] != '0') {	// ���ڰ� 0�� �ƴ� �� �� ���ڿ� ���� ��� 
			printf("%s%s", su[in[i]-48], danwi[length-i-1]);
			cnt++;
		}

		// ��, ��, ��, ���� ���� ���: ������ ���� �κп� 0�� ���Ե� ���. 
		if( (length-i-1)%4==0 && (length != i-1) &&
			( ( in[i] == '0' && in[i-1] != '0') || 
			 ( in[i] == '0' && in[i-1] == '0' && in[i-2] != '0') || 
			 ( in[i] == '0' && in[i-1] == '0' && in[i-2] == '0' && in[i-3] != '0') ) )
			printf("%s", danwi[length-i-1]);
		if( !((length-i-1)%4)) // 4�ڸ����� ���� ���. 
			printf(" ");
	}
	if(cnt == 0)
		printf("%s", su[0]); //��ü ����(cnt����)�� 0�� �� ���������. 
	printf("\n");
}
