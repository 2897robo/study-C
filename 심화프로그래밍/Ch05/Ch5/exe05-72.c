#include <stdio.h>

int main(void)
{
	int x, y, z, a, b, c, d, e, f, g, h;

	for(x = 1; x < 30; x++)
		for(y=1; y < 30; y++)
			for(z=1; z < 30; z++) {
				if(x != y && y != z && z != x) {
					a = x + y + z + z;
					b = z + x + x + x;
					c = y + y + y + z;
					d = x + z + x + y;
					e = x + z + y + x;
					f = y + x + y + z;
					g = z + x + y + x;
					h = z + x + z + y;
					if( a == 48 && b == 46 && c == 70 && d == 54
						&& e == 54 && g == 54 && h == 48) {
						printf("%2d  %2d  %2d  %2d = %2d\n", x, y, z, z, a);
						printf("%2d  %2d  %2d  %2d = %2d\n", z, x, x, x, b);
						printf("%2d  %2d  %2d  %2d = %2d\n", y, y, y, z, c);
						printf("%2d  %2d  %2d  %2d = %2d\n", x, z, x, y, d);
						printf("%2d  %2d  %2d  %2d\n", e, f, g, h);
					}
				}
			}
}
