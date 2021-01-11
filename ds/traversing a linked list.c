#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head=malloc(sizeof(struct node));
    struct node* current = malloc(sizeof(struct node));
    struct node *current1=malloc(sizeof(struct node));
    head->data=10;
    head->link=NULL;
    current->data=20;
    head->link-current;
    current1->data=40;
    current->link=current1;
    current1->link=NULL;

    printf("%d %d %d", head->data, current->data, current1->data);
    return 0;
}
