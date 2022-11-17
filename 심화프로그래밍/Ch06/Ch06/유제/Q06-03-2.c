#include <stdio.h>
int main()
{
	int i=0, cnt=0;
	char c[80];
	printf("영 문자열을 입력하시오 : "); 
	gets(c);
	while(c[i]) {
		switch(c[i]) {	// 모음을 찾아서 카운트한다. if를 써도 된다. 
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
	printf("모음의 개수 : %d\n", cnt); 
}
