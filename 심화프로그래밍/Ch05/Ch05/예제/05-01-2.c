#include <stdio.h>
int main()
{
	int counter=1, sum=0;
	// counter의 초깃값 1, sum은 초깃값 0을 가지고 있어야 한다. 
	while (counter<=10)
		sum += counter++;
	// { sum = sum + counter;
	// counter++; } 두 문장을 한 문장으로 만든 축약형, 두 문장으로 쓸 때는 {}으로 둘러싼다.
	printf("sum = %d\n", sum);
}
