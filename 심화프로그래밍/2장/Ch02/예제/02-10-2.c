#include <stdio.h>
int main()
{
	char in_data[20]="3.141592, 15.5", in_format[20] = "%lf%*c%lf";
	char out_data[80];
	char out_format[40] = "반지름이 %f인 원의 넓이는 %f이다.\n";
	double pi, radius;
	sscanf(in_data, in_format, &pi, &radius);
	sprintf(out_data, out_format, radius, pi*radius*radius);
	puts(out_data);
}
