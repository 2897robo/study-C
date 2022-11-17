#include <stdio.h> 

int main()
{
	int a, b ;
	char input[100], trans[100];
	
	printf("문자열 입력: "); 
	scanf("%s", input);
	
	for(a=0; input[a] != '\0'; a++)
		trans[a] = input[a] ^ 0x55;		// 문자를 0x55(0101 0101)과 XOR연산한다. 
	trans[a] = '\0';
	printf("%s", trans);
}
