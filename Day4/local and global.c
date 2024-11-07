#include<stdio.h>
int d;  //declaration of global variable at the top of main()
void abc()   {
    int x=10; //X=10 is local variable in abc()
    d=44; //d=44 is global, and changes will be saved in d
    printf("\n Value of X in function : %d\n",x);
    printf("\nvalue is d in abc is : %d",d);
}
void main()   {
    int x=69; //X=69 is local variable in main()
    d=33;       //d=33 is global and changes will effect the value in d
    abc();
    printf("\nValue of X in Main function : %d ",x);
    printf("\nvalue is d in main is : %d",d);
}