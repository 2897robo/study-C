#include <stdio.h> 
#include <math.h>    //sqrt() �Լ��� ����ϱ� ���� header file 

int main()
{
	int x, y, s, prime = 1, cnt=0;

	for (y=2; y<=100; y++) { // 2���� 100���� ������ ���� 
		prime = 1;
//		s = (int)sqrt(y);
		for (x=2; x<=y/2; x++) {  //x�� 2���� ��Ʈj���� �߿��� 
			if (y%x == 0) {
			// y�� x�� ����� �������� 0 �̸� �Ҽ��� �ƴϴ�. 
				prime = 0;
				break;
			}
		}
		if (prime == 1) {
			printf(" %d�� �Ҽ��̴�\n", y);
			cnt++;
		}
	}
	printf("count = %d\n", cnt);
}
