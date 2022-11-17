#include <stdio.h>
int main()
{
 	printf("%s:%d\n", "Red Devil", sizeof("Red Devil"));
 	printf("%s:%d\n", "∫”¿∫ æ«∏∂", sizeof("∫”¿∫ æ«∏∂"));
 	printf("%s:%d\n", "Korea", sizeof("Korea"));
 	printf("%s:%d\n", "", sizeof(""));
}
