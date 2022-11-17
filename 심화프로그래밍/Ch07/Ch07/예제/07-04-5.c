#include <stdio.h>
#include <stdlib.h>
int (*in)( const char *format, ... );
int (*out)( const char *format, ... );
int main()
{
	int x, i, *array, *head;
	in = scanf;		// scanf를 in으로 지정 
	out = printf;		// printf를 out으로 지정 
	
	printf("배열의 크기를 입력하시오 : ");
	in("%d", &x);	// scanf 대신 in 사용 
	head = array = calloc(sizeof(int), x);
	for(i=0; i<x; i++)
		*array++ = i; //array[i] = i; 
	array = head;
	for(i=0; i<x; i++)
		out("%d ", *array++); // printf 대신 out 사용 
	printf("\n");
	free(head);
	free(array);
}
