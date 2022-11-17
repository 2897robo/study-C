#include <stdio.h>
#include <stdlib.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
};

struct node *head=NULL, *tail=NULL;

void insert(struct node *);
void print_forward();
void print_backward();
void release();

int main()
{
	int x;
	struct node *head=NULL, *tail=NULL, *temp=NULL, *current=NULL;

	printf("음수 값을 입력하면 프로그램을 끝냅니다.\n"); 
	while(1) {
		printf("정수 데이터 입력 : ");
		scanf("%d", &x);
		if(x < 0)
			break;
		else {
			temp = malloc(sizeof(struct node));
			temp->data = x;
			temp->prev = temp->next = NULL;
		}
		insert(temp);
	}
	print_forward();	// 오름차순 출력 
	print_backward();	// 내림차순 출력 
	release();	// 할당된 메모리 해제 
	printf("\n");
}

void insert(struct node *t){
	struct node *current;
	if(head == NULL) // 데이터가 하나도 없을 때 
		head = tail = t;
	else { // 데이터가 한 개 이상일 때 
		current = head;
		while(current) {
			if( current->prev == NULL && 
			   current->data <= t->data ) { // 맨 앞에 삽입 
				head->prev = t;
				t->next = head;
				head = t;
				break;
			} 
			else if( current->next == NULL && 
			     current->data >= t->data) { // 맨 끝에 삽입 
				current->next = t;
				t->prev = current;
				tail = t;
				break;
			} else if( current->data >= t->data && 
			     current->next->data < t->data) {//가운데 삽입 
				t->next = current->next;
				current->next->prev = t;
				current->next = t;
				t->prev = current;
				break;
			} else // 다음 데이터를 찾아 포인터 이동
				current = current -> next;
		}
	}
}

void print_forward(){
	struct node *current = head;
	printf("\n\n sorted data by increasing\n");
	while(current) {
		printf("%d ", current -> data);
		current = current->next;
	}
}

void print_backward(){
	struct node *current = tail;
	printf("\n\n sorted data by decreasing\n");
	while(current) {
		printf("%d ", current -> data);
		current = current->prev;
	}
}

void release(void) {
	struct node *current;
	while(head) {
		current = head;
		head = current->next;
		free(current);
	}
}
