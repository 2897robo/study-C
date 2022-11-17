#include <stdio.h>
int main()
{
	char in1[40] = "110-033, 서울시 종로구 효자동",
	     in2[40]="441-390, 경기도 수원시 권선구 권선동";
	char out_format[30] = "우편번호:%s, 주소:%s", t1[30], t2[5], t3[30];
	char in_format[40] = "%[0123456789-]%[, ]%[^\0]",  out[80];
	sscanf(in1, in_format, t1, t2, t3);
	sprintf(out, out_format, t1, t3);
	puts(out);
	sscanf(in2, in_format, t1, t2, t3);
	sprintf(out, out_format, t1, t3);
	puts(out);
}
