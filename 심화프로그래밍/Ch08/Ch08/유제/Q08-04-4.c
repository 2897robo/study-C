#include <stdio.h>

void delBlank(char *);
int isWhite( char );

int main()
{
	char str[300] = "\t나 보기가 역겨워 가실때에는\n\
\t말없이 고이    보내 드리오리다\n\
\t연변에       약산    진달래꽃\n\
\t아름따다 가실길에        뿌리오리다\n\
\t가시는      걸음걸음 \r 놓인 그꽃을\n\
\t사뿐히 즈려밟고      가시옵소서\n\
\t나보기가    역겨워 가실때에는\n\
\t죽어도 아니눈물    흘리오리다.\n";
	printf("%s\n\n", str);
	delBlank(str);
	printf("-------------------------------\n%s\n", str);
}

void delBlank( char *string ) {
	char *dest, *src, ch;

	src = string;
	dest = string++;

	while( (ch = *src++) != 0 ){
		if( isWhite( ch ) ) {	// white space일 때 처리 
			if( src == string || !isWhite( dest[-1] ) )
				*dest++ = ' ';
		}
		else	// white space가 아니면 그냥 저장 
			*dest++ = ch;
	}
	*dest = 0;		// '\0'
}

int isWhite( char ch )
{
	return ch == ' ' || ch == '\t' || ch == '\v' || 
		ch == '\f' || ch == '\n' || ch == '\r';
}
