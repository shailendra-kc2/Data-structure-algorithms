#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *link;

};
int main()
{
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->data =10;
    head->link=NULL;
    struct node *current=malloc(sizeof(struct node));
    current->data=20;
    current->link=NULL;
    head->link=current ;
    struct node *current2=malloc(sizeof(struct node));
    current2->data=30;
    current2->link=NULL;
    current->link=current2;
    printf("%d %d %d ", head->data,current->data,current2->data);

    return 0;
}
