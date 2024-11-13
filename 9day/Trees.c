#include<stdio.h>

struct Node
{
    int data;
    struct Node* left_sub_tree;
    struct Node* right_sub_tree;
};
struct Node* create(int value)
{
    struct Node* newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->left_sub_tree=NULL;
    newnode->right_sub_tree=NULL;
    return newnode;
}
void insertNode(struct Node** root,int value)
{
    struct Node* newnode;
    newnode=create(value);
    if(*root==NULL)
    {
        *root=newnode;
    }    
    else{
        if(value<(*root)->data)
        {
            
        }
    }
}
void main()
{

}