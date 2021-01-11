#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head=0;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=190;
    head->link=0;
    printf("%d ", head->data);
    return 0;
}
