#include <stdio.h>
int main()
{
	float i=1.0, j=-1.75, *a;
	a = &i;		// ������ ����, �ּҿ����� &
	printf("%p, %p, ", &i, a);	// %p:�ּ����
	printf("%f\n", *a);	// *a�� a�� ����Ű�� ���� ������
	a = &j;		 // ������ ����, �ּҿ����� &
	printf("%p, %p, ", &j, a); 	// %p:�ּ����
	printf("%f\n", *a);
}
