#include <stdio.h>
int main()
{
	int i=0, cnt=0;
	char c[80];
	printf("�� ���ڿ��� �Է��Ͻÿ� : "); 
	gets(c);
	while(c[i]) {
		switch(c[i]) {	// ������ ã�Ƽ� ī��Ʈ�Ѵ�. if�� �ᵵ �ȴ�. 
			case 'a':	case 'A':
			case 'e':	case 'E':
			case 'i':	case 'I':
			case 'o':	case 'O':
			case 'u':	case 'U':
				cnt++;
				break;
		}
		i++;
	}
	printf("������ ���� : %d\n", cnt); 
}
