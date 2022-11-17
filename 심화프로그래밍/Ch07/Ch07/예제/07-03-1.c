#include <stdio.h>
int main()
{
 	char x[]="string", y[]="test", *b;
	b = x;		 // 포인터 변경, 문자열은 이름 대입
	printf("%p, %p, ", &x, b);
	printf("%s\n", b);
	b = y;		 // 포인터 변경, 주소연산자(&) 사용 안함.
	printf("%p, %p, ", &y, b);
	printf("%s\n", b);
}
