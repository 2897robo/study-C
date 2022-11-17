#include <stdio.h>
int main()
{
	printf("20194487 김기욱");
	int i, j, rank; 
	int stud[10] = {45,92,88,34,88,95,82,59,70,76}; 

	for (i=0; i<10; i++) {
		rank=0;
		for (j=0; j<10; j++)
			if(stud[i] <= stud[j])
				rank ++;
		printf("%d : %d위\n", stud[i], rank);
	}
}
