#include <stdio.h>

int main()
{
	int i=0, j=0;
	char str1[100] = "This is ";
	char str2[100] = "sample string.";


	while( str1[i] )	//str1�� ���� �ִ� ������ �̵��Ѵ�. 
		i++;

	while(str2[j])
		str1[i++] = str2[j++];

	str1[i] = '\0';
	printf("%s\n", str1);
}
