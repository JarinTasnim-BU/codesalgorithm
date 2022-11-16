#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	struct root *left;
	struct root *right;
	//struct root *parent;
	int data;
};
struct node *root,*newnode,*temp,*parent;
void insert(int data)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=0;
    newnode->right=0;
    parent=0;
    if(root==0)
    {
        root=temp=newnode;
         //printf("%d\n",temp->data);
    }

    else
    {  temp=root;
        while(temp!=0)
        {
        parent=temp;
        if(data>temp->data)
            {
                temp=temp->right;
                 //printf("insertrd in right\n");
            }
      //else if(data<temp->data)
        else
            {
                temp=temp->left;
               // printf("insertrd in left\n");
            }
//        else
//            {
//                printf("can't insert\n");
//                return;
//            }

        }

        if(data<parent->data)
        {
            parent->left=newnode;
        }
         if(data>parent->data)
        {
            parent->right=newnode;
        }
    }
}
///preroot
void print1(struct node* p){
if(p!=0){
    printf("%d ",p->data);
    print1(p->left);
     print1(p->right);

}
}
///postroot
void print2(struct node* p){
if(p!=0){

    print2(p->left);
     print2(p->right);
printf("%d ",p->data);
}
}
///inroot
void print3(struct node* p){
if(p!=0){

    print3(p->left);
    printf("%d ",p->data);
     print3(p->right);

}
}


int main()
{
    int n,i,j,k;
    root=5;
    insert(3);
    insert(4);
    insert(2);
    insert(5);
    insert(1);

    // print1(root);
    //print2(root);
print3(root);

}
