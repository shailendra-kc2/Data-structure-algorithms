#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node * add (struct node *ptr , int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    ptr->link=temp;
    return temp;
}
int main()
{
    struct node*head=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    struct node *ptr=head;
    ptr=add(ptr,20);
    ptr=add(ptr, 30);
    ptr=add(ptr, 40);
    ptr=add(ptr, 50);
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\ ", ptr->data);
    ptr=ptr->link;

    }
    printf("\n ");
    printf("reversing list is : \n");

    return 0;
}
