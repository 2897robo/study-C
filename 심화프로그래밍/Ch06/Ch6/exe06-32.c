#include <stdio.h>

int main() {
	int x, y, value[20] = { 15, 30, 28, 24, 9, 4, 10, 22, 20,
			11, 11, 23, 9, 22, 13, 18, 17, 11, 2, 21};
	static char histogram[20][30]; // �ִ� 30������ �ǵ��� ��

	// �迭�� ������׷� ǥ�� ���� ��M���� �����ϴ� ����
	for(x=0; x<20; x++) {	
		for(y=0; y<value[x]; y++) {
			histogram[x][y] = 'M';
		}
	}
	for(y=29; y>=0; y--) {		// ����� ������׷� ��� 
		if( (y+1)%5 == 0) 	// y���� ���� 5�������� ���  
			printf("%2d|", y+1);
		else 
		    printf("%3s", "|"); 	// y�� ��� 

		// ������׷��� ��M�����, �̸� �迭�� ������ �� ��. 
		for(x=0; x<20; x++)	
			printf("%3c", histogram[x][y]);
		printf("\n");
	}
	printf(" 0|"); 		// ��(0)�� ��� 
	for(x=0; x<=20; x++)	// x�� ��� 
		printf("---");
	printf("\n%3s", "");	// x���� �� ��� 
	for(x=0; x<20; x++)
		printf("%3d", value[x]);
	printf("\n");
}
