#include <stdio.h>
int main()
{
	int counter=1, sum=0;
	// counter�� �ʱ갪 1, sum�� �ʱ갪 0�� ������ �־�� �Ѵ�. 
	while (counter<=10)
		sum += counter++;
	// { sum = sum + counter;
	// counter++; } �� ������ �� �������� ���� �����, �� �������� �� ���� {}���� �ѷ��Ѵ�.
	printf("sum = %d\n", sum);
}
