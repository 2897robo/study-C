#include <stdio.h>
int main( )
{
	int length, line = 1;
	int j = 1, i, k;
	printf( "���� ���� �Է��Ͻÿ�: " );
	scanf( "%d", &length );
	while( length-- ) {
		for( i = 1; i <= length + 5; i++ )
			printf( " " );
		for( i = 1; i <= line; i++, j++ )
			printf( "%d ", ( j % 10 ) );
		printf( "\n" );
		line++;
	}
}
