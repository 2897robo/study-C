#include <stdio.h> 
#include <stdlib.h> 
struct tree { 
	int data; 
  	struct tree *left; 
  	struct tree *right; 
}; 

struct tree* getTree() { 
  	struct tree *tmp; 
  	tmp = (struct tree*)malloc(sizeof(struct tree) * 1); 
  	tmp->left = tmp->right = NULL; 
  	return tmp; 
} 

void inputTree(struct tree **root, int data) { 
  	if (!(*root)) { 
    	*root = getTree(); 
    	(*root)->data = data; 
    	return; 
 	} 
 	if ((*root)->data == data) { 
  		printf("%d is already exist.\n", data); 
   		return; 
	}else if ((*root)->data<data) 
		inputTree(&(*root)->right, data); 
	else 
		inputTree(&(*root)->left, data); 
}
 
void freeTree(struct tree *p) { 
  	if (!(p->left) && !(p->right)) { 
    	free(p); 
    	return; 
 	} 
 	if ((p->left)) freeTree(p->left); 
 	if ((p->right)) freeTree(p->right); 
}
 
struct tree* searchNode(struct tree *search, int data) { 
	  if (search == NULL) { 
  		  printf("Not found.\n"); 
  		  return NULL; 
 	} 
 	if (search->data == data) { 
   		printf("found %d\n", data); 
  		return search; 
	} 
	else if (data < search->data) { 
  		searchNode(search->left, data); 
	}
	else { 
  		searchNode(search->right, data); 
	} 
} 

void printTreeInorder(struct tree *search) { 
 	 if (search) { 
 		   printTreeInorder(search->left); 
 		   printf("%d\n", search->data); 
 		   printTreeInorder(search->right); 
 	} 
} 

int countLeafnode(struct tree *search) { 
 	 if (search == NULL) 
 		 return 0; 
 	 if (search->left == NULL && search->right == NULL)  
	 	 return 1; 
	 else 
  		return countLeafnode(search->left) + countLeafnode(search->right); 
}
 
int main() { 
	printf("20194487 ±è±â¿í\n");
	  struct tree *root = NULL; 
	  inputTree(&root, 50); 
	  inputTree(&root, 52); 
	  inputTree(&root, 55); 
	  inputTree(&root, 6); 
	  inputTree(&root, 69); 
	  inputTree(&root, 40); 
	  inputTree(&root, 24); 
	  inputTree(&root, 43); 
	  inputTree(&root, 3); 
	  inputTree(&root, 1); 
	  inputTree(&root, 56); 
	  inputTree(&root, 51); 
	  inputTree(&root, 59); 
	  inputTree(&root, 3); 
	  printTreeInorder(root); 
	  printf("\n"); 
	  searchNode(root, 55); 
	  searchNode(root, 53); 
  	printf("%d\n", countLeafnode(root)); 
  	freeTree(root); 
  	return 0; 
}