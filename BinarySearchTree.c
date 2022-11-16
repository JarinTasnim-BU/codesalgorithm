#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct root Root;

struct root
{
	Root *left;
	Root *right;
	Root *p;
	int data;
};

Root *tree;

void insert(int value)
{
	Root *holder, *temp, *y;

	holder = (Root *) malloc(sizeof(Root));
	holder->data = value;
	holder->left = NULL;
	holder->right = NULL;
	holder->p = NULL;

	if(tree == NULL) {
		tree = holder;
	}
	else {
		temp = tree;
		while(temp != NULL) {
			y = temp;
			if(holder->data < temp->data)
				temp = temp->left;
			else temp  = temp->right;
		}
		holder->p = y;

		if(holder->data < y->data) y->left = holder;
		else y->right = holder;
	}
}

int main()
{
	insert(5);
	insert(15);

	printf("%d", tree->data);
}
