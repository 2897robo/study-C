#include <stdio.h>
#include <math.h>

int main() {
	int x1, x2, y1, y2;
	double a, dis;

	printf("첫번째 점 (x1,y1): ");
	scanf("%d %d", &x1, &y1);
	printf("두번째 점 (x2,y2): ");
	scanf("%d %d", &x2, &y2);

	a = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	dis = sqrt(a);

	printf("Distance= %lf \n", dis);

	return 0;
}
