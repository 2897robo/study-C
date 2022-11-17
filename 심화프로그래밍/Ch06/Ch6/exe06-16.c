#include <stdio.h>
#include <time.h>

int main()
{
	int array[100], data;
	int p1, p2, pos, i=0, j;
	srand(time(0));
	for(i=0; i<100; i++)
		array[i] = rand();
	
	for(i=0; i<100; i++)
		for(j=i+1; j<100; j++)
			if( array [i] > array[j])
				array[i] = array[i] + array[j] - (array[j] = array[i]);

	for(i=0; i<100; i++)
		printf("%d ", array[i]);

	printf("\n\n찾고자 하는 데이터를 입력하시오: ");
	scanf("%d", &data);
	p1 = 0;
	p2 = 100;
	while( 1 ){
		pos = (p1 + p2) / 2;
		if( array[pos]  == data) {
			printf("%d를 %d번째에서 찾았습니다.\n", data, pos+1);
			break;
		}
		else if( array[pos] > data)
			p2 = pos;
		else
			p1 = pos;
		if( p1 >= p2){
			printf("찾는 데이터가 없습니다.\n");
			break;
		}
	}
	
}
