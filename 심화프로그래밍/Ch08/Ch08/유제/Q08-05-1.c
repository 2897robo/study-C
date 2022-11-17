#include <stdio.h>

int comb(int n, int r) {
	return(n==0||r==0||n==r ? 1 : (comb(n-1,r) + comb(n-1,r-1)));
}

int main() {
	printf("%d \n", comb(45, 6));
	printf("%d \n", comb(5, 0));
	printf("%d \n", comb(5, 5));
}
