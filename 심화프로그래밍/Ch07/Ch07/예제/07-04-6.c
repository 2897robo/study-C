#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *digits[] = { "", "One ", "Two ", "Three ",
		"Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine ", "Ten ",
		"Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
		"Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };
	char *tens[] = { "", "", "Twenty ", "Thirty ", "Forty ",
		"Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety " };
	char *magnitudes[] = { "", "Thousand ", "Million ", "Billion "};

	char *st, i;
	unsigned int x, dx[4]={0,}, h, t, y, value;

	st = (char *)malloc(200);
	printf("양의 정수를 입력하시오 : ");
	scanf("%u", &x);

	if( x == 0 ) // 0인 경우 처리 
		strcpy( st, "ZERO" );
	else {
		*st = '\0';		// 처음에 널로 시작한다. 
		y = x;
		for(i=0; i<4; i++){
			*(dx+i) = y%1000;
			y /= 1000;
		}
		for(i = 3; i >= 0; i--){
			value = *(dx+i);
			if( h = value/100 ) {
				strcat(st, *(digits+h));
				strcat(st, "Hundred ");
			}
			value %= 100;
			if(value<20)
				strcat(st, *(digits+value));
			else{
				h = value/10;
				t = value%10;
				strcat(st, *(tens+h));
				strcat(st, *(digits+t));
			}
			if(*(dx+i))
				strcat(st, *(magnitudes+i));
		}
	}
	printf("%u = %s\n", x, st);
	free(st);
}
