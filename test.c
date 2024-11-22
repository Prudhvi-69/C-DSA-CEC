#include<stdio.h>
#include<stdlib.h>
struct Node{
    int i;
    struct Node *link;
};
void main() {
 struct Node *n1 = calloc(1, sizeof(struct Node));
 struct Node *n2 = malloc(sizeof(struct Node) * 1);
 *n2 = *n1;
 printf("%d,  %d", n1->i, n2->i);
}

