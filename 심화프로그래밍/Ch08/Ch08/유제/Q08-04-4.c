#include <stdio.h>

void delBlank(char *);
int isWhite( char );

int main()
{
	char str[300] = "\t�� ���Ⱑ ���ܿ� ���Ƕ�����\n\
\t������ ����    ���� �帮������\n\
\t������       ���    ���޷���\n\
\t�Ƹ����� ���Ǳ濡        �Ѹ�������\n\
\t���ô�      �������� \r ���� �ײ���\n\
\t����� ������      ���ÿɼҼ�\n\
\t�����Ⱑ    ���ܿ� ���Ƕ�����\n\
\t�׾ �ƴϴ���    �긮������.\n";
	printf("%s\n\n", str);
	delBlank(str);
	printf("-------------------------------\n%s\n", str);
}

void delBlank( char *string ) {
	char *dest, *src, ch;

	src = string;
	dest = string++;

	while( (ch = *src++) != 0 ){
		if( isWhite( ch ) ) {	// white space�� �� ó�� 
			if( src == string || !isWhite( dest[-1] ) )
				*dest++ = ' ';
		}
		else	// white space�� �ƴϸ� �׳� ���� 
			*dest++ = ch;
	}
	*dest = 0;		// '\0'
}

int isWhite( char ch )
{
	return ch == ' ' || ch == '\t' || ch == '\v' || 
		ch == '\f' || ch == '\n' || ch == '\r';
}
