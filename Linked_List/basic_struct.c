#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linked_list_traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    // allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // lindked first and second node
    head->data = 7;
    head->next = second;

    // lindked second and third node
    second->data = 11;
    second->next = third;

    // terminate linked list
    third->data = 66;
    third->next = NULL;

    //linkedlist printing
    linked_list_traversal(head);
    return 0;
}