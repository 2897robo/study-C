#include <stdio.h>

int main()
{
	int car_no, tel_no, sum;
	int w, x, y, z;
	for(w = 3; w<10; w++)
		for(x = 2; x < 10; x++)
			for(y = 1; y < x; y++) {	// ��° ���� �� ��° ������ ŭ(y<x������ �ݺ� ����) 
				z = w - 2;		// ù ��° ���� ������ ������ 2ŭ 
				car_no = w*1000 + x*100 + y*10 + z;		// ����ȣ ��� 
				tel_no = z*1000 + y*100 + x*10 + w;		// ��ȭ��ȣ(����ȣ�� ����) ��� 
				if(car_no + tel_no == 16456 && w != x && x != y) {// ����ȣ+��ȭ��ȣ == 16456 �ΰ�? 
					printf("�ڵ��� ��ȣ = %d\n", car_no); 
				}
			}
}
