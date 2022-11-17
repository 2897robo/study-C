// 예제 08-05-3
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#define LEFT 0
#define RIGHT 1

typedef int Data;

struct node {
	Data		d;
	struct node	*left;
	struct node	*right;
};

typedef	struct node	Node;
typedef	Node	*Btree;

void	add_node(Btree, Btree, Data, int);
Btree	new_node(Data d1);
Btree	root = NULL;

void	inorder(Btree);
void	release(Btree);

int main() {
	printf("20194487 김기욱\n");
	Data    a;
	int     i, size = 10;		/* size = 트리의 노드 개수 */ 
	for (i=0; i<size; i++) {
		printf("%d번째 데이터 입력 : ", i+1); 
		scanf("%d", &a);
		add_node(root, root, a, 0);
	}
	printf("\n---Inorder binary tree traversal:\n");
	inorder(root);
	release(root);
	getch(); 
	return 0;
}

/* Create a linked binary tree */ 
void add_node(Btree parent, Btree r_node, Data d1, int r_l) {
	if (root == NULL) {
		root = new_node(d1);		return;
	} else {
		if (r_node == NULL) {
			if (r_l == 0)
				parent -> left = new_node(d1);
			else
		 		parent -> right = new_node(d1);
		} else if (d1 > r_node -> d ) {
			parent = r_node;
			add_node(parent, r_node -> right, d1, RIGHT);
		} else {
			parent = r_node;
			add_node(parent, r_node -> left, d1, LEFT);
		}
	}
}

Btree new_node(Data d1) {	 /* Create a new node. */ 
	Btree   t;

	t = (Btree) malloc(sizeof(Node));
	assert(t != NULL);
	t -> d = d1;
	t -> left = NULL;
	t -> right = NULL;
	return t;
}

void inorder(Btree root) {		/* Inorder binary tree traversal. */ 
	if (root != NULL) {
		inorder(root -> left);		/* recur left */ 
		printf("%d ", root -> d);
		inorder(root -> right);		/* recur right */ 
	}
}

void release(Btree root) {		/* free tree */ 
	if (root != NULL) {
		release(root -> left);		/* recur left */ 
		free(root);
		release(root -> right);		/* recur right */ 
	}
}
