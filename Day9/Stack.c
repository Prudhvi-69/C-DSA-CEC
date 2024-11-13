//Stack and the operations of  STACK
#include<stdio.h>
int size;
void push(int top,int value,int *Stack)
{//Inserting an element into Stack at top
    if(top==size) //If it is full, cannot push values into Stack
    {
        printf("\nStack Overflow, cannot push more values!!!");
        return;
    }
    Stack[top]=value;
    printf("\n%d value at index : %d",Stack[top],top);
}
void peek(int top,int *Stack)
{//this function will let you have a look at top most element
    if(top==-1)
    {
        printf("\nStack is Underflow..!!!!");
        return;
    }
    printf("\nTop most element is : %d",Stack[top]);
}
int pop(int top,int *Stack)
{
    if(top==-1)
    {
        printf("\nStack is Underflow, cannot pop elements...!!!!");
        return top;
    }
    printf("\nPopping out %d from Stack",Stack[top]);
    top=top-1;
    return top;
}
void display(int top,int *Stack)
{
    if(top==-1)
    {
        printf("\nStack underflow, no elements to display in the Stack...!!!");
        return;
    }
    printf("\nAll elements in the Stack : ");
    for(;top>=0;top--)
    {
        printf("\n| %d |",Stack[top]);
        printf("\n______");
    }
}
void main()
{
    printf("\nEnter the Size of Stack : ");
    scanf("%d",&size);
    int Stack[size];
    int static top=-1;
    for(int i=1;i<=size;i++){
        int input;
        printf("\nPush the value at index %d : ",i-1);
        scanf("%d",&input);
        top++;//0,1,2
        push(top,input,Stack);
    }
    printf("\ntop most index is %d and value is %d ",top,Stack[top]);
    peek(top,Stack);
    top=pop(top,Stack);
    printf("\n After popping out once....!!!");
    peek(top,Stack);
    display(top,Stack);


}
/*
Enter the Size of Stack : 5

Push the value at index 0 : 11
Push the value at index 1 : 706
Push the value at index 2 : 69
Push the value at index 3 : 6
Push the value at index 4 : 108
top most index is 4 and value is 108
Top most element is : 108
Popping out 108 from Stack
 After popping out once....!!!
Top most element is : 6
All elements in the Stack :
| 6 |
______
| 69 |
______
| 706 |
______
| 11 |
*/