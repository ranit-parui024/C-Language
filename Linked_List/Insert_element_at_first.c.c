#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *getnode(int x)
{
    Node *ptr;
    ptr = malloc(sizeof(Node));
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}
Node *HP; // golbal variable
void print(Node *S)
{
    while (S != NULL)
    {
        printf("Element : %d\n", S->data);
        S = S->next;
    }
}

Node *insert_first(Node *S, int x){
    Node * ptr = getnode(x);
    ptr -> next = S;
    ptr -> data = x;

    return ptr;
}

int main()
{
    Node *head = getnode(11);
    Node *second = getnode(22);
    Node *third = getnode(33);
    Node *last = getnode(44);

    head->next = second;
    second->next = third;
    third->next = last;

    printf("Before Addition\n");
    print(head);
    head = insert_first(head, 28);
    printf("After Addition\n");
    print(head);

    return head;
}