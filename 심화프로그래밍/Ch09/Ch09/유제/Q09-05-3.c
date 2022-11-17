#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
typedef int Data;

struct node {
	Data		data;
	struct node	*left;
	struct node	*right;
};

typedef	struct node	Node;
typedef	Node	*Btree;

void	add_node(Btree, Btree, Data);
Btree	new_node(Data d1);
void	inorder(Btree);
void	preorder(Btree);
void	postorder(Btree);
void	release(Btree);
Btree	Root = NULL;

int main() {
	Data    a, tree_data[SIZE];
	int     i;
	srand(time(0));

	for(i=0; i<SIZE; i++)
		tree_data[i] = rand();

	for (i=0; i<SIZE; i++)
		add_node(Root, Root, tree_data[i]);

	printf("---Inorder binary tree traversal:\n");
	inorder(Root);
	printf("\n\n---Preorder binary tree traversal:\n");
	preorder(Root);
	printf("\n\n---Postorder binary tree traversal:\n");
	postorder(Root);
	release(Root);
}

/* Create a linked binary tree */ 
void add_node(Btree parent, Btree c_node, Data x) {
	if (Root == NULL) {
		Root = new_node(x);
		return;
	}
	else {
		if (c_node == NULL) {
			if (parent -> data >= x)
				parent -> left = new_node(x);
			else
		 		parent -> right = new_node(x);
		}
		else if (x > c_node -> data )
			add_node(c_node, c_node -> right, x);
		else
			add_node(c_node, c_node -> left, x);
	}
	return;
}

Btree new_node(Data d) {	 /* Create a new node. */ 
	Btree t;
	t = (Btree) malloc(sizeof(Node));
	assert(t != NULL);
	t -> data = d;
	t -> left = NULL;
	t -> right = NULL;
	return t;
}

void inorder(Btree tree) {		/* Inorder binary tree traversal. */ 
	if (tree != NULL) {
		inorder(tree -> left);		/* recur left */ 
		printf("%10d", tree -> data);
		inorder(tree -> right);		/* recur right */ 
	}
}

void preorder(Btree tree) {		/* Preorder binary tree traversal. */ 
	if (tree != NULL) {
		printf("%10d", tree -> data);
		preorder(tree -> left);
		preorder(tree -> right);
	}
}

void postorder(Btree tree) {	/* Postorder binary tree traversal. */ 
	if (tree != NULL) {
		postorder(tree -> left);
		postorder(tree -> right);
		printf("%10d", tree -> data);
	}
}

void release(Btree tree) {		/* free tree */ 
	if (tree != NULL) {
		release(tree -> left);		/* recur left */ 
		release(tree -> right);		/* recur right */ 
		free(tree);
	}
}
