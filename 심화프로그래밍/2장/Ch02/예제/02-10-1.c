#include <stdio.h>
int main()
{
	char in_data[20]="50, 129";
	char out_data[80];
	char out_format[40] = "x의 값은 = %d, y의 값은 = %d\n";
	int x, y;
	sscanf(in_data, "%d%*c%d", &x, &y);
	sprintf(out_data, out_format, x, y);
	puts(out_data);
}
 
