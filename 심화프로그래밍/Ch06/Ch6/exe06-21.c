#include <stdio.h>

int main()
{
	char base[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char result[100] = "";
	int d, x, y, z=0;

	printf("10진 정수를 입력하시오 : ");
	scanf("%d", &d);

	do {		// 2~36사이의 값을 입력받는다. 
		printf("변환할 진수를 입력하시오(2~36) : "); 
		scanf("%d", &y); 
	} while(y < 2 || y > 37);

	x = d;
	while(x) {
		result[z++] = base[x%y];	// 나머지를 계산하여 저장한다. 
		x /= y;	// 몫을 저장한다. 
	}
	result[z] = '\0';	// 문자열의 끝에 NULL 문자 삽입 

	printf("\n10진수 %d을(를) %d진수로 바꾸면 \"", d, y);
	while(z!=0)			// 저장된 내용을 거꾸로 출력 
		printf("%c", result[--z]);
	printf("\"\n");
}
