#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
	int x, y, i;
	char a[30], b[30], t[30];

	printf("정수 두 개를 입력하시오 : ");
	scanf("%[^, ]%[, ]%[^\n]", a, t, b);

	printf("%s, %s\n", a, b);
	
	for(i=0; i<strlen(a); i++) {	// a문자열에서 숫자이외의 다른 값이 저장되어 있는지 검사 
		if( !(isdigit(a[i]) ) ) {
			printf("Error!!!\n");
			exit(0);
		}
	}

	for(i=0; i<strlen(b); i++) {	// b문자열에서 숫자이외의 다른 값이 저장되어 있는지 검사 
		if( !(isdigit(b[i]) ) ) {
			printf("Error!!!\n");
			exit(0);
		}
	}

	x = atoi(a);	// 문자열로 된 숫자를 정수로 변환하는 표준함수 atoi() 
	y = atoi(b);

	printf("%d * %d = %d\n", x, y, x*y);
}
