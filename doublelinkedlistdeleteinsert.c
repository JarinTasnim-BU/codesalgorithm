#include<stdio.h>
struct node
{
    int data;
    struct node *next,*previous;
};
struct node *head, *newnode,*temp1, *temp;
void insert(int data)
{
    newnode=(struct node*)/*it's type casting*/malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=0;
        newnode->previous=0;
    //temp=head;
    if(head==0)
    {
        temp=head=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->previous=temp;
        temp=temp->next;
    }
}
void search(int data)
{
    int f=0;
    temp1=head;
    while(temp1!=0)
    {
        if(temp1->data==data)
        {
            printf("inserted value is matched\n");
            f=1;
        }
        temp1=temp1->next;
    }
    if(!f)printf("The inserted value doesn't exist\n");
}
viewnode()
{
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

int main()
{
    struct node *newnode;
    int i, a, b, inp, n;
    head=0;
    insert(10);
    insert(20);
    insert(30);

    search(20);
    search(80);


    viewnode();
}
