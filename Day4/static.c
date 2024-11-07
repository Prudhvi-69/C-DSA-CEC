#include<stdio.h>
void add(int number) //10,32,99,26,69
{
    static int sum=0;
    sum=sum+number; //10, 42, 141, 167, 236
    printf("\nSUM : %d",sum);
}
void main()
{
    int number;
    for(int i=1;i<=5;i++)
    {
        scanf("%d",&number); // 10, 32, 99, 26, 69
        add(number);
    }

}