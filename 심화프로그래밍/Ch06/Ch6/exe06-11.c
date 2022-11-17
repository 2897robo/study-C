#include <stdio.h> 

int main()
{
	unsigned int index, a, b ;
	int pascal_t[15][30] = {1, 0, };		// �Ľ�Į�� �ﰢ���� �ش��ϴ� ���� ������ 2�� �迭 
	
	for(a=1; a<13; a++) {		// �Ľ�Į�� ���� �����ϴ� ���� 
		pascal_t[a][0] = 1;
		for(b=1; b<a+1; b++) {	// ���� ������ ���� ���� �����ϴ� ���� 
			pascal_t[a][b] = pascal_t[a-1][b-1] + pascal_t[a-1][b];
		}
	}

	for(a=0; a<13; a++) {		// ȭ�鿡 �Ľ�Į�� �ﰢ�� ��� 
		printf("%*s", 37-a*3, "");		// �տ� ������ ��µ� �κ� ����Ͽ� ����Ѵ�. 
		for(b=0; b<a+1; ) {	// ����� �Ľ�Į�� �� ����Ѵ�. 
			printf("%6d", pascal_t[a][b]);
			if( pascal_t[a][++b] < 1)
				break;
		}
		printf("\n");
	}
}
