#include <stdio.h>
void print_series(int);

int main() {
	printf("20194487 ����\n");
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	print_series(x); 
}

void print_series(int x) {
	if(x==0)	// ������ ���� ǥ��
		return;
	print_series(x-1);
	printf("%d ", x);
}
