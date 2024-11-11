#include<stdio.h>

struct Address {
    char street[50];
    char city[50];
};

struct Person {
    char name[50];
    struct Address addr;
};
void main()
{
    struct Person p;
    p.addr.city;
    
}