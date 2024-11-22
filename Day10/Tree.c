#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left_sub_tree;//left sub tree
    struct Node* right_sub_tree;//right sub tree
};
struct Node* create(int value)
{//Function to create an individual node and make left and right as NULL by default
    struct Node* newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;    //value inside node
    newnode->left_sub_tree=NULL;
    newnode->right_sub_tree=NULL;
    return newnode;
}
struct Node* insertNode(struct Node* root,int value)
{
    struct Node* newnode;
    newnode=create(value);
    if(root==NULL)
    {
        return newnode;
    }    
    else{
        if(value<root->data)
        {
            root->left_sub_tree=insertNode(root->left_sub_tree,value);
        }
        else if(value>root->data)
        {
            root->right_sub_tree=insertNode(root->right_sub_tree,value);
        }
    }
    //printf("\n root is : %d",root->data);
    return root;
}
void preorder(struct Node* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left_sub_tree);
        preorder(root->right_sub_tree);
    }
}
void inorder(struct Node* root)
{
    if(root!=NULL)
    {
        inorder(root->left_sub_tree);
        printf(" %d ",root->data);
        inorder(root->right_sub_tree);
    }
}
void postorder(struct Node* root)
{
    if(root!=NULL)
    {
        postorder(root->left_sub_tree);
        postorder(root->right_sub_tree);
        printf("%d ",root->data);
    }
}
int search(struct Node* root, int sv)
{
    if(root==NULL)
        return 0;
    else{
        if(root->data==sv)
            return 1;
        else if(sv<root->data)
        {
            int x=search(root->left_sub_tree,sv);
            if(x==1)
                return 2;
        }     
        else if(sv>root->data)
        {
            int y=search(root->right_sub_tree,sv);
            if(y==1)
                return 3;
        }
    }
    //return 0;
}
void main()
{
    struct Node* root=NULL;
    int nodes;
    printf("\nEnter no of nodes in the Tree : ");
    scanf("%d",&nodes);
    for(int i=1;i<=nodes;i++)
    {
        int input;
       // printf("\nEnter node value : ");
        scanf("%d",&input);
        root=insertNode(root,input);
    }
    printf("\n Inorder Traversal : ");
    inorder(root);//46 69 90 100

    printf("\n Preorder Traversal : ");
    preorder(root);

    printf("\n Postorder Traversal : ");
    postorder(root);

    printf("\nEnter the element to Search : ");
    int sv;
    scanf("%d",&sv);
    int x=search(root,sv);
    if(x>0)
    {
        if(x==1)
            printf("\nElement %d is found in the ROOT",sv);
        else if(x==2)
            printf("\nElement %d is found in Left Sub Tree",sv);
        else if(x==3)
            printf("\nElement %d is found in Right Sub Tree",sv);
    }
    else{
        printf("\nElement not found in the Tree...!!!!");
    }
}