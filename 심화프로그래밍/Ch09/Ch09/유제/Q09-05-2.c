#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *top=NULL, *temp=NULL;

void push(int x) {
	temp = malloc(sizeof(struct node));
	temp -> data = x;
	temp -> next = top;
	top = temp;
	print_stack();
	return;
}

void pop() {
	if(top == NULL) {
		printf("\nStack is empty!!!\n");
		return;
	}
	temp = top;
	top = top -> next;
	free(temp);
	print_stack();
	return;
}

void print_stack() {
	if(top == NULL) {
		printf("\nStack is empty!\n");
		return;
	}
	temp = top;
	printf("\n현재 스택의 내용 : "); 
	while(temp) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	return;
}

void release() {
	temp = top;
	while(top) {
		temp = top;
		top = top -> next;
		free(temp);
	}
}

int main()
{
	printf("20194487 김기욱\n");
	int x, d;
	do {
		printf("1. Push, 2. Pop, 3. Print, 0. Exit\n Input : ");
		scanf("%d", &x);
		switch(x) {
			case 1:
			 	printf("\n데이터 입력 : ");
				scanf("%d", &d);
				push(d);
				break;
			case 2:
				pop();
				break;
			case 3:
				print_stack();
				break;
			case 0:
				release();
				return (0);
			default:
				break;
		}
		printf("\n");
	} while(1);
}

