#include <stdio.h>

int main()
{
	int array[9][9]={0,}; // 9��9 �迭�� �����ϰ� �ʱ갪�� ��� 0�� �����Ѵ�. 
	int i, j, num=1, start=0, end=8, up_down=1;

	for(i=0; i<9; i++) {
		if(up_down) {		// ��, ���� 1�� �پ���. up_down�� 1�̸� �پ��� 0�̸� �þ��. 
			for(j=start; j<=end; j++)
				array[j][i] = num++;
			start++;
			end--;
		}
		else {			// ��, ���� 1�� �þ��. 
			for(j=start; j<=end; j++)
				array[j][i] = num++;
			start--;
			end++;
		}
		if(start == end)	// ��� ���� �پ��ٰ� �������� �ٽ� �þ�� �Ѵ�. 
			up_down = 0;	// 1�̸� �پ��� 0�̸� �þ��. 
	}
	for(i=0; i<9; i++) {
		for(j=0; j<9; j++) {
			if(array[i][j] == 0)
				printf("%3s", "");
			else 
				printf("%3d", array[i][j]);
		}
		printf("\n");
	}
}
