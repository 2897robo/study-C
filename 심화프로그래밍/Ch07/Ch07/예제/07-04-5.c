#include <stdio.h>
#include <stdlib.h>
int (*in)( const char *format, ... );
int (*out)( const char *format, ... );
int main()
{
	int x, i, *array, *head;
	in = scanf;		// scanf�� in���� ���� 
	out = printf;		// printf�� out���� ���� 
	
	printf("�迭�� ũ�⸦ �Է��Ͻÿ� : ");
	in("%d", &x);	// scanf ��� in ��� 
	head = array = calloc(sizeof(int), x);
	for(i=0; i<x; i++)
		*array++ = i; //array[i] = i; 
	array = head;
	for(i=0; i<x; i++)
		out("%d ", *array++); // printf ��� out ��� 
	printf("\n");
	free(head);
	free(array);
}
