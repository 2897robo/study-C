#include <stdio.h>
int main()
{
	int num=1539, count=0, x, y;
	for (x=1; x<= num; x++) {	// 1부터 1539까지 반복
		y = x;
		while (y > 0) { 		// 각 수에 3이 들어 있는지 확인 
			if (y % 10 == 3) // 끝자리가 3이면 
				count ++; 	// count를 증가 
			y /= 10;	 	// 한 자리 오른쪽 이동 
		}
	}
	printf("count = %d\n", count);
}
