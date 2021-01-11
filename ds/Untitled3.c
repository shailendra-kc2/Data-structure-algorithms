#include<stdio.h>
#include<stdlib.h>
int stack[3],top=-1;
void push(int stack[],int data)
{
    if(top=2)
        printf("overflow\n");
    else
    {
        top++;
        stack[top]=data;
    }
}
void display (int stack[])
{
    if(top=-1)
        printf("stack is empty ");
    else
    {
        for(int i=top;i<=0;i--)
            printf("\n%d ", stack[i]);
    }
}
int main()
{ int val;
    printf("enter the number to be pushed on stack :");
    scanf("%d", &val);
    push(stack,val);
    display(stack);
    return 0;


}


