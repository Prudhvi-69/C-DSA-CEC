#include<stdio.h>
int size;
int top;
void push(int top,int value,int *Stack)
{
    if(top==size-1)
    {
        printf("\nStack Overflow, cannot push more values!!!");
        return;
    }
    //top++;
    Stack[top]=value;
    printf("\n%d value at index : %d",Stack[top],top);
}
void peek(int top,int *Stack)
{
    if(top==-1)
    {
        printf("\nStack is Underflow..!!!!");
        return;
    }
    printf("\nTop most element is : %d",Stack[top]);
}
void main()
{
    printf("\nEnter the Size of Stack : ");
    scanf("%d",&size);
    int Stack[size];
    top=-1;

    for(int i=1;i<=size;i++)
    {
        int input;
        printf("\nPush the value at index %d : ",i-1);
        scanf("%d",&input);
        top++;
        push(top,input,Stack);
    }
    peek(top,Stack);
    




}