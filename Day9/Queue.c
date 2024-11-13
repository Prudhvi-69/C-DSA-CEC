#include<stdio.h>
int size;
int front;
int entry(int value,int *Queue, int front, int rear)
{
    if(rear>size){
        printf("\nQueue is full, cannot enter new values ....!!!");
        return rear;
    }
    Queue[front]=value;//50 40 30 20 10
    for(int i=rear;i>=0;i--)//3,10 10 20 30
    {
        Queue[i+1]=Queue[i];    
    }
    printf("\n%d entered the Queue at %d and %d value is at %d",\
    value,front,Queue[rear],rear);
    rear++;
    return rear;
}
int exitValue(int front, int rear, int *Queue)
{
    if(front==rear)
    {
        printf("\nQueue is empty, cannot remove any value...!!!");
        return rear;
    }
    rear--;
    return rear;
}
void display(int front,int rear,int *Queue)
{
    if(front==rear)
    {
        printf("\n Queue is Empty, no one there...!!!!");
        return;
    }
    printf("\nQueue : ");
    for(int i=front+1;i<=rear;i++)
    {
        printf("%d ",Queue[i]);
    }
}
void main()
{
    printf("\nEnter the size of QUEUE : ");
    scanf("%d",&size);
    int Queue[size];
    front=0;
    int static rear=0;
    for(int i=1;i<=size;i++)
    {
        int input;
        printf("\nEnter value %d into QUEUE : ",i);
        scanf("%d",&input);
        rear=entry(input,Queue,front,rear);
    }
    display(front,rear,Queue);
    rear=exitValue(front,rear,Queue);
    printf("\nAfter deleting at REAR END : ");
    display(front,rear,Queue);
}