#include <stdio.h>
int main()
{
	int x=1, y=1, z=0;
	printf("1, 1, ");	// ó�� �� ���� "1, 1, "�� ����Ѵ�. 
	for(;;) {
		z = x + y;
		if(z < 0)
			// ���� ū �������� Ŀ���� �Ǹ� ������ �ٲ�� ������ �̿��Ѵ�. 
			break;
		printf("%d, ", z);
		x = y;
		y = z;
	}
	printf("\n");
	printf("Ȳ�ݺ� = %f\n", (double)y / (double)x);
}
