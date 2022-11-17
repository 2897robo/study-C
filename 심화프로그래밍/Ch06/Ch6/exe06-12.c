#include <stdio.h>

int main()
{
	int array[9][9]={0,}; // 9×9 배열을 선언하고 초깃값을 모두 0을 지정한다. 
	int i, j, num=1, start=0, end=8, up_down=1;

	for(i=0; i<9; i++) {
		if(up_down) {		// 행, 열이 1씩 줄어든다. up_down이 1이면 줄어들고 0이면 늘어난다. 
			for(j=start; j<=end; j++)
				array[j][i] = num++;
			start++;
			end--;
		}
		else {			// 행, 열이 1씩 늘어난다. 
			for(j=start; j<=end; j++)
				array[j][i] = num++;
			start--;
			end++;
		}
		if(start == end)	// 행과 열이 줄어들다가 같아지면 다시 늘어나게 한다. 
			up_down = 0;	// 1이면 줄어들고 0이면 늘어난다. 
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
