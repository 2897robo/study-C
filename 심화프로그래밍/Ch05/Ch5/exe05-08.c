#include <stdio.h>
//20���� �����͸� �Է¹޾� �հ� ����� ����ϴ� ���α׷��� while�� �̿��Ͽ� �ۼ��϶�.
int main()
{
	int cnt=0, sum=0, data;

	while(cnt<20) {
		printf("%d: ", cnt+1);
		scanf("%d", &data);
		sum += data;
		cnt++;
	}
	printf("sum = %d, average = %f\n", sum, sum/20.);
}
