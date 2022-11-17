#include <stdio.h>

int main() {
	int x, h, t, cnt=0;
	for(x=1000; x<=9999; x++) {
		h = (x/100)%10;
		t = (x/10)%10;
		if( h == t && x % 9 == 0) {
			printf("%d ", x);
			cnt++;
		}
	}
	printf("\n\ncount = %d\n", cnt);
}
