#include <stdio.h>
int sum(int (*x)[], int, int) ;

int main(void)
{
	printf("20194487 김기욱\n");
	int p, a[2][3]={{1,2,3}, {4,5,6}};
	int b[3][3] = { {9,8,7}, {6,5,4}, {3,2,1}};
	int (*pt)[3];	// 배열 포인터 

	pt = a ;	// pt는 배열 a[0], a[1]을 가리키는 포인터 
	p = sum(pt, 2, 3) ;	// sum(a, 2, 3); 
	printf("%d\n", p) ;
	pt = b ;	// pt는 배열 b[0], b[1], b[2]를 가리키는 포인터 
	p = sum(pt, 3, 3) ;	// sum(b, 3, 3); 
	printf("%d\n", p) ;
}

int sum(int (*x)[3], int y, int z)
{
	int tot=0 ;
	int i, j ;

	for(i=0 ; i < y ; i++) {
		for(j=0 ; j < z ; j++)
			tot+= (*x)[j] ;
		x++;		// x의 포인터 변화 
	}
	return tot ;
}
