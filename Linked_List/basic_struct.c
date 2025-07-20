#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

void linked_list_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *getnode(int x)
{
    struct node *ptr;
    ptr = malloc(sizeof(Node));
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // allocate memory for nodes in the linked list in Heap
    head = malloc(sizeof(Node));
    second = malloc(sizeof(Node));
    third = malloc(sizeof(Node));

    // lindked first and second node
    head->data = 7;
    head->next = second;

    // lindked second and third node
    second->data = 11;
    second->next = third;

    // terminate linked list
    third->data = 66;
    third->next = NULL;

    // linkedlist printing
    linked_list_traversal(head);
    return 0;
}