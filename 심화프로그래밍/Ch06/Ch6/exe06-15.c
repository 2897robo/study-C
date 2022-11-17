#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	int x, y, sum[70]={0, }, i;
	int x_len, y_len, xOk = 1, yOk = 1;
	static char cx[71], cy[71], sx[71], sy[71], t[10];

	printf("큰 정수 2개를 입력하시오 : \n");
	scanf("%[0123456789]%[^0123456789]%[0123456789]", sx, t, sy);

	memset(cx, ' ', 70);		// cx 문자열의 전체를 ‘ ’(space)으로 채운다. 
	cx[70] = '\0';			// cx 문자열의 마지막 문자를 NULL로 설정 
	strcpy(cy, cx);			// cx를 cy에 복사한다. 

	x_len = strlen(sx);		// 입력된 문자열의 길이를 구한다. 
	y_len = strlen(sy);

	memmove(cx+(70-x_len), sx, x_len); // sx문자열을 cx 문자열의 끝으로 복사 
	memmove(cy+(70-y_len), sy, y_len); // sy문자열을 cy 문자열의 끝으로 복사 

	for(i=69; xOk || yOk; i--) {  	// cx와 cy 둘 중 하나라도 숫자이면 계산하여 sum에 저장한다. 
		xOk = isdigit(cx[i]);		// space일 수 있으므로 숫자 인지 검사한다. 
		yOk = isdigit(cy[i]);
		x = xOk ? cx[i] - '0' : 0;	// 숫자로 된 문자이면 정수로 바꾸고 아니면 0을 넣는다. 
		y = yOk ? cy[i] - '0' : 0;
		sum[i] += x + y;			// 한자리 덧셈 
		sum[i-1] = sum[i]/10;		// 캐리 계산 
		sum[i] %= 10;				// sum 계산 
	}

	printf("   %s\n", cx);		// cx값 출력 
	printf(" + %s\n", cy);		// cy값 출력 

	printf(" = ");
	for(i=0; sum[i] == 0; i++)		// 결과 값 sum 출력 
		printf(" ");         		// 0인 경우 공백 출력 
	for(; i< 70; i++)         		// 끝(69)까지 출력 
		printf("%d", sum[i]);

	printf("\n");
	getch();
}
