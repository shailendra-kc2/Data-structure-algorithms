#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next ;

};
//i
int main()
{
     struct node *head=malloc(sizeof(struct node ));
head->data=1;
head->next=NULL;
struct node*current =malloc(sizeof(struct node));
current->data=2;
head->next=current;
current->next=NULL;
printf("currently linked list is %d %d\n", head->data, current->data);
printf("\n enter the number which you want to add\n ");
int n;
scanf("%d",&( n));
struct node *add=malloc(sizeof(struct node ));
add->data=n;
add->next=head;
printf("new list is %d %d %d" , add->data, head->data, current->data);

return 0;



}
