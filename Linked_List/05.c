#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

// Function to create a new node
Node *getnode(int x)
{
    Node *ptr;
    ptr = malloc(sizeof(Node));
    if (ptr == NULL)
    { // Always check if malloc was successful
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory cannot be allocated
    }
    ptr->data = x;
    ptr->next = NULL;
    return ptr;
}

// Function to build an initial linked list (1 -> 2 -> 3)
Node *build_node()
{
    Node *temp1, *temp2, *temp3;
    temp1 = getnode(1);
    temp2 = getnode(2);
    temp3 = getnode(3);

    temp1->next = temp2;
    temp2->next = temp3;

    return temp1; // Return the head of the list
}

// Global head pointer (for simplicity in this example)
Node *HP;

// Function to print the linked list
void print(Node *S)
{
    if (S == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    while (S != NULL)
    {
        printf("Element : %d\n", S->data);
        S = S->next;
    }
}

// Function to add a new node with data 'x' after the first occurrence of 'y'
Node *AddxAftery(Node *S, int x, int y)
{
    Node *newNode = getnode(x); // Create the new node to insert
    Node *current = S;          // Use a temporary pointer to traverse

    // Handle empty list case (though adding after 'y' in an empty list doesn't make sense)
    if (current == NULL)
    {
        printf("List is empty, cannot add %d after %d.\n", x, y);
        free(newNode); // Free the allocated node as it won't be used
        return S;      // Return original head (still NULL)
    }

    // Traverse the list to find 'y'
    while (current != NULL && current->data != y)
    {
        current = current->next;
    }

    // If 'y' is found
    if (current != NULL && current->data == y)
    {
        newNode->next = current->next; // New node points to what 'current' was pointing to
        current->next = newNode;       // 'current' now points to the new node
    }
    else
    {
        printf("Element %d not found in the list. Cannot add %d after it.\n", y, x);
        free(newNode); // Free the allocated node as it won't be used
    }
    return S; // Return the original head (as insertion doesn't change the head unless it's an empty list, which we handled)
}

// Function to delete the first occurrence of node with data 'y'
// This function needs to return the new head if the first element is deleted
Node *delete_y(Node *head, int y)
{
    Node *current = head;
    Node *prev = NULL;

    // Case 1: If the head node itself holds the data to be deleted
    if (current != NULL && current->data == y)
    {
        head = current->next; // Move head to the next node
        free(current);        // Free the old head
        return head;          // Return the new head
    }

    // Case 2: Traverse the list to find the node to be deleted
    // 'current' will point to the node to be deleted, 'prev' to the node before it
    while (current != NULL && current->data != y)
    {
        prev = current;
        current = current->next;
    }

    // If 'y' was not present in the list
    if (current == NULL)
    {
        printf("Element %d not found in the list.\n", y);
        return head; // Return the original head
    }

    // If 'y' was found (current is now pointing to the node to delete)
    // Link the previous node to the node after 'current'
    prev->next = current->next;
    free(current); // Free the deleted node

    return head; // Return the original head (it hasn't changed in this case)
}

int main()
{

    HP = build_node();
    printf("--- Before deleting 1 ---\n");
    print(HP);

    // After deleting the head, HP needs to be updated with the new head
    HP = delete_y(HP, 1);
    printf("--- After deleting 1 ---\n");
    print(HP);

    printf("--- Before deleting 3 ---\n");
    print(HP);
    HP = delete_y(HP, 3);
    printf("--- After deleting 3 ---\n");
    print(HP);

    printf("--- Before deleting 2 ---\n");
    print(HP);
    HP = delete_y(HP, 2);
    printf("--- After deleting 2 ---\n");
    print(HP);

    printf("--- Attempting to delete from an empty list ---\n");
    HP = delete_y(HP, 5); // Try deleting from an empty list
    print(HP);

    printf("--- Adding 5 after 2 (list is empty) ---\n");
    HP = AddxAftery(HP, 5, 2);
    print(HP);

    // Rebuild for AddxAftery test
    HP = build_node();
    printf("--- Before adding 5 after 2 ---\n");
    print(HP);
    HP = AddxAftery(HP, 5, 2);
    printf("--- After adding 5 after 2 ---\n");
    print(HP);

    printf("--- Adding 99 after 100 (not found) ---\n");
    HP = AddxAftery(HP, 99, 100);
    print(HP);

    return 0;
}