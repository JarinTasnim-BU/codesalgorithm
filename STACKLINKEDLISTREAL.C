#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head, *newnode, *temp,*temp1,*tail;

//push
void push(int data)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    newnode->prev=0;
    if(head==0)
    {
        head=temp=tail=newnode;
    }

    else
    {
        temp->next=newnode;//temp is initially null.
        newnode->prev=temp;//for loop
            }
    tail=newnode;//for always insert at tail.
}

//pop
void pop()//no parameter as it always follows FILO or LIFO
{
if(head!=0){
    if(tail->prev!=0){
temp=tail->prev;//temp previous node a niye rakha hoyeche
temp->next=0;//as temp tail r tail er next null
free(tail);
tail=temp;
}
else if(tail->prev==0){
        printf("Empty Stack\n");
temp=0;
free(tail);
head=0;
}
}
else{
    printf("\nStak underflow\n");
}
}


viewnode()
{
    temp1=head;
    while(temp1!=0)
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }
}


///main
int main()
{

    int i,n;
    head=0;

 push(5);
 pop();
pop();
 push(69);
 push(99);
 viewnode();
}
