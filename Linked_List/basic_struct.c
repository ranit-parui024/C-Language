#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

// void linked_list_traversal(struct node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

Node *getnode(int x)
{
    Node *ptr;
    ptr = malloc(sizeof(Node));
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

Node *build_123()
{
    Node *temp1, *temp2, *temp3;
    temp1 = getnode(1);
    temp2 = getnode(2);
    temp3 = getnode(3);
    temp1->next = temp2;
    temp2->next = temp3;
    return temp1;
}

Node *HP;
void print(Node *S)
{
    while (S != NULL)
    {
        printf("Element : %d\n", S->data);
        S = S->next;
    }
}

int count(Node *S)
{
    int counter = 0;
    while (S != NULL)
    {
        counter++;
        S = S->next;
    }
    return counter;
}

void foo(Node *HP)
{
    while (HP != NULL)
    {
        HP->data += 5;
        HP = HP->next;
    }
}

//add node at the begining of list
void add_begin (Node *S, int x){
    Node *p = getnode (x);
    p -> next = S;
    HP = p;
}

// add node at the end of list
void add_end(Node *S, int x){
    Node *p = getnode(x);
    if(S){
        while (S -> next != NULL)
        {
            S = S -> next;
        }
        S -> next = p;
    }
    else {
        HP = p;
    }
}

int main()
{
    HP = build_123();
    foo(HP);
    print(HP);
    printf("Number of Nodes : %d\n", count(HP));
    return 0;
}