
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;

};
void traversing(struct node *head )
{
    struct node *ptr=NULL;
    ptr=head;
    int c=0;
    while(ptr!=NULL)
    {
        printf("%d  ", ptr->data );
        ptr=ptr->next;
        c++;

    }
    printf("\n");
    printf(" total no of elements is %d ",c);

}
int main()
{
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=20;
    head->next=current;
    current->next=NULL;
    struct node*current1=malloc(sizeof(struct node));
    current1->data=30;
    current1->data=31;
    current->next=current1;
    current1->next=NULL;


    traversing(head);
    return 0;
}
