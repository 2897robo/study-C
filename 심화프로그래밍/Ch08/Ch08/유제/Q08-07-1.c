#include <stdio.h>

void print_series(int);	// �Լ����� 

int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	print_series(x); 
}

void print_series(int x) {
	static int cnt;	// �ʱ갪�� �������� �ʾƵ� 0���� �ʱ�ȭ �ȴ�. 
	int t=0;	// �ڵ������� �ʱ갪�� ������ �־�� ���� �����ȴ�. 
	cnt++, t++;
	printf("%dȸ ȣ��, t=%d\n", cnt, t); //cnt�� t�� ���� ����. 
	if(x==0)
		return;
	print_series(x-1);
	printf("%d ", x);
}
