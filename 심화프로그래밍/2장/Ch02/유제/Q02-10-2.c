#include <stdio.h>
int main()
{
	char in_data[40] = "3928, 4829394, 98394, 69394";
	char in_format[40] = "%d%*c%d%*c%d%*c%d";
	char out_format[50] = "%#010X, %#010X, %#010X, %#010X", out[80];
	int a, b, c, d;

	sscanf(in_data, in_format, &a, &b, &c, &d);
	sprintf(out, out_format, a, b, c, d);
	puts(out);
}
