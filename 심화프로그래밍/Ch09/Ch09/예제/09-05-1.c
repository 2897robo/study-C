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
	printf("20194487 김기욱\n");
	int x;
	struct node *temp=NULL;
	
	printf("음수 값을 입력하면 프로그램을 끝냅니다.\n"); 
	while(1) {
		printf("정수 데이터 입력 : ");
		scanf("%d", &x);
		if(x < 0)
			break;
		else {
			temp = malloc(sizeof(struct node));	// 동적 메모리 생성
			temp->data = x;	// 데이터 저장
			temp->link = NULL;	// 다음 포인터는 널
		}
		insert(temp);
	}
	// 출력하면서 할당된 메모리 영역을 해제함. 
	printf("\n정렬된 데이터\n");
	print(head);	// 리스트 출력
	printf("데이터가 삭제됩니다.\n");
	release(head);	// 생성된 메모리 모두 해제
}

void insert(struct node *t) {
	struct node *pos;
	if(head == NULL) // 데이터가 하나도 없을 때 
		head = t;
	else if(head->link == NULL){ // 데이터가 하나만 있을 때 
		if(head->data > t->data) // 끝에 삽입 
			head->link = t;
		else { // 앞에 삽입 
			t->link = head;
			head = t;
		}
	}
	else { // 데이터가 두 개 이상일 때
		pos = head;
		while(pos) {
		    if( pos == head && pos->data <= t->data ) {
			t->link = head; 	// 맨 앞에 삽입
			head = t;
			break;
		    } else if( pos->link == NULL && pos->data >= t->data) {
			pos->link = t;	// 맨 끝에 삽입 
			break;
		    } else if( pos->data>=t->data && pos->link->data < t->data) {
			t->link = pos->link; // 가운데 삽입 
			pos->link = t;
			break;
		    } else	// 삽입할 위치를 찾아 다음 포인터로 이동 
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
