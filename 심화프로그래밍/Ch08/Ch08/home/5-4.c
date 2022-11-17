#include <stdio.h>
#include <stdlib.h>
// 정렬되어 있는 배열에서 2진 검색으로 자료를 찾음
int Bsearch(int v[], int x, int left, int right)
{
	int mid;	// bsearch함수는 stdlib.h에 있음.
	if(left > right)
		return -1;
	mid = (left+right)/2;
	if(v[mid] == x)
		return mid;
	else if(v[mid] < x)
		return Bsearch(v, x, mid+1, right);
	else 
		return Bsearch(v, x, left, mid-1);
}

int main() {
	printf("20194487 김기욱\n");
	int a[] = {2, 5, 6, 7, 9, 11, 12, 15, 19, 34};
	int x, n, num;
	num = sizeof(a)/sizeof(a[0]);
	printf("찾을 데이터를 입력하시오 : ");
	scanf("%d", &x);
	n = Bsearch(a, x, 0, num-1);
	if( n < 0)
		printf("찾으시는 데이터 %d는 없습니다.\n", x);
	else 
		printf("%d은(는) %d번째에 있습니다. \n", x, n);
}
