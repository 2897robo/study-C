#include <stdio.h>  
#include <math.h> 

struct point {
	int x;
	int y;
};

double get_distance(struct point p1, struct point p2)
{
	return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main(void) {
	printf("20194487 ����\n");
	struct point p1, p2;
	
	printf("ù��° x�� y ��ǥ�� �Է��ϼ���\n");
	scanf("%d %d", &p1.x, &p1.y);

	printf("�ι�° x�� y ��ǥ�� �Է��ϼ���\n");
	scanf("%d %d", &p2.x, &p2.y);

	printf("�Ÿ��� %f\n", get_distance(p1, p2));

	return 0;
}