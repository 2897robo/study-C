#include <stdio.h>
#include <stdlib.h>
// ���ĵǾ� �ִ� �迭���� 2�� �˻����� �ڷḦ ã��
int Bsearch(int v[], int x, int left, int right)
{
	int mid;	// bsearch�Լ��� stdlib.h�� ����.
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
	printf("20194487 ����\n");
	int a[] = {2, 5, 6, 7, 9, 11, 12, 15, 19, 34};
	int x, n, num;
	num = sizeof(a)/sizeof(a[0]);
	printf("ã�� �����͸� �Է��Ͻÿ� : ");
	scanf("%d", &x);
	n = Bsearch(a, x, 0, num-1);
	if( n < 0)
		printf("ã���ô� ������ %d�� �����ϴ�.\n", x);
	else 
		printf("%d��(��) %d��°�� �ֽ��ϴ�. \n", x, n);
}
