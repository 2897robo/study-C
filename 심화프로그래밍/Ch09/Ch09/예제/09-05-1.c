#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
	int data;
	struct node *link;
};

struct node *head=NULL;

void insert(struct node *);
void print(struct node *);
void release(struct node *);

int main()
{
	printf("20194487 ����\n");
	int x;
	struct node *temp=NULL;
	
	printf("���� ���� �Է��ϸ� ���α׷��� �����ϴ�.\n"); 
	while(1) {
		printf("���� ������ �Է� : ");
		scanf("%d", &x);
		if(x < 0)
			break;
		else {
			temp = malloc(sizeof(struct node));	// ���� �޸� ����
			temp->data = x;	// ������ ����
			temp->link = NULL;	// ���� �����ʹ� ��
		}
		insert(temp);
	}
	// ����ϸ鼭 �Ҵ�� �޸� ������ ������. 
	printf("\n���ĵ� ������\n");
	print(head);	// ����Ʈ ���
	printf("�����Ͱ� �����˴ϴ�.\n");
	release(head);	// ������ �޸� ��� ����
}

void insert(struct node *t) {
	struct node *pos;
	if(head == NULL) // �����Ͱ� �ϳ��� ���� �� 
		head = t;
	else if(head->link == NULL){ // �����Ͱ� �ϳ��� ���� �� 
		if(head->data > t->data) // ���� ���� 
			head->link = t;
		else { // �տ� ���� 
			t->link = head;
			head = t;
		}
	}
	else { // �����Ͱ� �� �� �̻��� ��
		pos = head;
		while(pos) {
		    if( pos == head && pos->data <= t->data ) {
			t->link = head; 	// �� �տ� ����
			head = t;
			break;
		    } else if( pos->link == NULL && pos->data >= t->data) {
			pos->link = t;	// �� ���� ���� 
			break;
		    } else if( pos->data>=t->data && pos->link->data < t->data) {
			t->link = pos->link; // ��� ���� 
			pos->link = t;
			break;
		    } else	// ������ ��ġ�� ã�� ���� �����ͷ� �̵� 
			pos = pos -> link;
		}
	}
}

void print(struct node *h) {
	while(h) {
		printf("%d ", h -> data);
		h = h-> link;
	}
	printf("\n");
}

void release(struct node *c) {
	struct node *tmp;
 	while(c) {
		tmp = c;
		c = c-> link;
		free(tmp);
	}
}
