#include <stdio.h> 

int main()
{
	int a, b ;
	char input[100], trans[100];
	
	printf("���ڿ� �Է�: "); 
	scanf("%s", input);
	
	for(a=0; input[a] != '\0'; a++)
		trans[a] = input[a] ^ 0x55;		// ���ڸ� 0x55(0101 0101)�� XOR�����Ѵ�. 
	trans[a] = '\0';
	printf("%s", trans);
}
