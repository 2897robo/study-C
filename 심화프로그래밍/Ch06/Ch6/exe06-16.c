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

	printf("\n\nã���� �ϴ� �����͸� �Է��Ͻÿ�: ");
	scanf("%d", &data);
	p1 = 0;
	p2 = 100;
	while( 1 ){
		pos = (p1 + p2) / 2;
		if( array[pos]  == data) {
			printf("%d�� %d��°���� ã�ҽ��ϴ�.\n", data, pos+1);
			break;
		}
		else if( array[pos] > data)
			p2 = pos;
		else
			p1 = pos;
		if( p1 >= p2){
			printf("ã�� �����Ͱ� �����ϴ�.\n");
			break;
		}
	}
	
}
