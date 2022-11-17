#include <stdio.h>

int main()
{
	int alphabet[26] = {0, }, i=0;
	char str[100];

	printf("영 문자열을 입력하시오: ");
	scanf("%[^\n]s", str);

	while( str[i] ){;
		if(str[i]>='a' && str[i] <='z')
			alphabet[str[i]-'a']++;
		if(str[i]>='A' && str[i] <='Z')
			alphabet[str[i]-'A']++;
		i++;
	}

	for(i=0; i<26; i++)
		printf("%c: %d\n", i+'a', alphabet[i]);
}
