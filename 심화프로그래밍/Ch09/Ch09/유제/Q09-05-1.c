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

	printf("���� ���� �Է��ϸ� ���α׷��� �����ϴ�.\n"); 
	while(1) {
		printf("���� ������ �Է� : ");
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
	print_forward();	// �������� ��� 
	print_backward();	// �������� ��� 
	release();	// �Ҵ�� �޸� ���� 
	printf("\n");
}

void insert(struct node *t){
	struct node *current;
	if(head == NULL) // �����Ͱ� �ϳ��� ���� �� 
		head = tail = t;
	else { // �����Ͱ� �� �� �̻��� �� 
		current = head;
		while(current) {
			if( current->prev == NULL && 
			   current->data <= t->data ) { // �� �տ� ���� 
				head->prev = t;
				t->next = head;
				head = t;
				break;
			} 
			else if( current->next == NULL && 
			     current->data >= t->data) { // �� ���� ���� 
				current->next = t;
				t->prev = current;
				tail = t;
				break;
			} else if( current->data >= t->data && 
			     current->next->data < t->data) {//��� ���� 
				t->next = current->next;
				current->next->prev = t;
				current->next = t;
				t->prev = current;
				break;
			} else // ���� �����͸� ã�� ������ �̵�
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
