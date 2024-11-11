#include<stdio.h>
#include<stdlib.h>
struct Node   //Memory for each Node
{
    int data;
    struct Node* next;
};
// struct Node *head=NULL;
struct Node* create(int value) 
// Creation of each Node with Data and Next parts
{
    struct Node* newnode;
    newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    //printf("\n%d created\n",value);
    return newnode;
}
void insert(struct Node** head,int value)
//inserting into the next nodes and linking them
{
    struct Node *newnode;
    newnode=create(value);
    if(*head==NULL)
    {
        *head=newnode;
        //printf("\n%d inserted\n",head->data);
    }else{
        //printf("\nhello\n");
        struct Node* temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void insertBegin(struct Node **head,int value)
{
//Inserting a new node at the beginning
    struct Node* newnode;
    newnode=create(value);
    newnode->next=*head;
    *head=newnode;
}
void deleteB(struct Node** head)
{
//Deleting a node at the beginning of Linked List 
    struct Node* temp=*head;
    *head=temp->next;
    temp->next=NULL;
    free(temp);
}
void DeleteEnd(struct Node** head)
{
//Deleting a Node at the Ending in the Linked List    
    struct Node *temp=*head;
    struct Node *abc;
    while(temp->next!=NULL)
    {
        abc=temp;
        temp=temp->next;
    }
    free(temp);
    abc->next=NULL;
}
void display(struct Node* head)
{
    struct Node* temp=head;
    printf("\nNodes : ");
    while(temp->next!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;//move to next node
    }
    printf("%d -> NULL",temp->data);
}
void main()
{
    struct Node* head=NULL;
    int nodes;
    printf("\nEnter how many nodes you want : ");
    scanf("%d",&nodes);
    for(int i=1;i<=nodes;i++)
    {
        int input;
        printf("\nEnter node %d : ",i);
        scanf("%d",&input);
        insert(&head,input);
    }
    display(head);
    // insert(&head,58);
    // insert(&head,20);
    // insert(&head,55);
    // insert(&head,48);
    // insert(&head,69);
    //display(head);
    printf("\nNodes after inserting at beginning :");
    insertBegin(&head,106);
    display(head);
    deleteB(&head);
    printf("\nNodes after deleting at beginning :");
    display(head);

    DeleteEnd(&head);
    printf("\nNodes after deleting at ending :");
    display(head);
}
/*
Enter how many nodes you want : 8
Enter node 1 : 10
Enter node 2 : 20
Enter node 3 : 30
Enter node 4 : 40
Enter node 5 : 50
Enter node 6 : 60
Enter node 7 : 70
Enter node 8 : 69
Nodes after inserting at beginning :
Nodes : 106 -> 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> 69 -> NULL     
Nodes after deleting at beginning :
Nodes : 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> 69 -> NULL
Nodes after deleting at ending :
Nodes : 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70 -> NULL*/