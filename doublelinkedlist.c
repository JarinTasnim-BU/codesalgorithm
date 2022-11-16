#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev, *next;
};
struct node *head, *newnode, *temp, *temp1;
void insert(int data)
{
newnode=(struct node*) malloc(sizeof(struct node));
newnode->data=data;
newnode->prev=0;
newnode->next=0;

if(head == 0)
{
    temp=head=newnode;
}
else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
}
}
void display()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void search(int s)
            {
                temp1=head;
                int count=0;
                while(temp1!=0)
                {
                    if(temp1->data==s)
                    {
                        printf("Items Found.\n");
                        count=1;
                        temp1=temp1->next;
                    }
                    else{
                        temp1=temp->next;
                    }
                }
                if(count==0){
                    printf("Items not found.\n");
                }
            }
int main()
{
  head=0;
  int i,input,s;
  for(i=1;i<=5;i++)
  {
      scanf("%d",&input);
      insert(input);
  }

  display();
  printf("\n");
  scanf("%d",&s);
  search(s);
}
