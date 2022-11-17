#include <stdio.h>
int main()
{
	printf("I love Korea!");
	printf("");		// 아무것도 출력하지 않는다.
	printf(" ");	// 공백을 하나 출력한다.
	printf("\"I love Korea!\"");
	printf("대~\t한민국\n");		// 탭을 출력한다.
	printf("\\I love C!!!\\");
	printf("%%d는 정수를 출력한다.\n"); 	// %자체를 출력한다.
	printf("This is a very, very, very, \
very, very, very long line.\n");
	printf("This is a very, very, very, "		// 이렇게 하면 두 문장을 하나로
		  "very, very, very long line.\n");		// 인식한다.
}
