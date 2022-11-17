#include <stdio.h>
int main()
{
	int x=1, y=1, z=0;
	printf("%d, %d, ", x, y);	// 처음 두 수 1, 1을 출력한다.
	while(1) {
		z = x + y;
		if(z < 0) // 가장 큰 정수보다 커지게 되면 음수로 바뀌는 성질을 이용한다.
			break;
		printf("%d, ", z);
		x = y;
		y = z;
	}
	printf("\n");
	printf("황금비 = %f\n", (double)y / (double)x);
}
