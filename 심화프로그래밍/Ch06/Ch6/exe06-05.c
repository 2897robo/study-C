#include <stdio.h> 
#include <math.h>    //sqrt() �Լ��� ����ϱ� ���� header file 

int main()
{
	int x, y, s, prime = 1, cnt=0;
	int pri[100];

	for (y=2; cnt<=100; y++) { // 2���� 100���� ������ ���� 
		prime = 1;
		s = (int)sqrt(y);
		for (x=2; x<=s; x++) {  //x�� 2���� ��Ʈj���� �߿��� 
			if (y%x == 0) {
			// y�� x�� ����� �������� 0 �̸� �Ҽ��� �ƴϴ�. 
				prime = 0;
				break;
			}
		}
		if (prime == 1) {
			pri[cnt] = y;
			cnt++;
		}
	}
	printf("�ֵ��� �Ҽ�\n");
	for(cnt=1; cnt<100; cnt++)
		if( pri[cnt-1] +2 == pri[cnt] )
			printf("%d %d\n", pri[cnt-1], pri[cnt]);
}
