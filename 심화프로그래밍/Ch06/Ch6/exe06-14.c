#include <stdio.h>
#include <time.h>
// 트리를 만들어 루트부터 하나씩 저장한다. 이를 응용할 수 있는 프로그램을 작성해 보자. 
int main()
{
	int tree[100] = {0, };
	int position=0, i=0, j;
	srand(time(0));
	for(i=0; i<50; i++){
		if(i==0)
			tree[i] = rand();
		for(j=1; j<=2; j++){
			tree[i*2+j] = rand();
		}
	}
	
	for(i=0; i<100; i++)
		printf("%6d", tree[i]);
}
