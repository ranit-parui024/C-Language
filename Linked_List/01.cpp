#include <stdio.h>  // For standard input/output functions like printf
#include <stdlib.h> // For dynamic memory allocation functions like malloc and free

// --- 1. Node Structure Definition ---
// This defines the basic building block of our linked list.
// Each node will hold an integer 'data' and a pointer 'next'
// that will point to the subsequent node in the list.
typedef struct node
{
    int data;         // The data stored within this node
    struct node *next; // Pointer to the next node in the sequence
} Node; // Using 'Node' as a typedef for convenience, allowing us to use 'Node'
        // instead of 'struct node' when declaring variables.

// --- 2. Function to Create a New Node (getnode) ---
// This function allocates memory for a new node, initializes its data,
// and sets its 'next' pointer to NULL. It also includes error handling
// for memory allocation.
Node* createNode(int x) // Renamed from getnode to createNode for clarity
{
    Node *newNode = NULL; // Initialize pointer to NULL for safety

    // Allocate memory for a new Node
    newNode = (Node*) malloc(sizeof(Node));

    // --- Error Handling: Check if malloc was successful ---
    if (newNode == NULL)
    {
        perror("Memory allocation failed in createNode"); // Prints system error message
        // fprintf(stderr, "Error: Could not allocate memory for a new node.\n"); // Alternative custom error
        return NULL; // Return NULL to indicate failure
    }

    // Initialize the new node's members
    newNode->data = x;      // Set the data for the new node
    newNode->next = NULL;   // New nodes are typically the last, so their 'next' is NULL

    return newNode; // Return the pointer to the newly created node
}

// --- 3. Function to Build a Simple Linked List (build123List) ---
// This function demonstrates how to create a small linked list
// with three nodes containing data 1, 2, and 3.
Node* build123List() // Renamed from buld123 to build123List for clarity and convention
{
    // --- Correction: Correct way to declare multiple pointers ---
    Node *temp1 = NULL;
    Node *temp2 = NULL;
    Node *temp3 = NULL;

    // Create the individual nodes using our createNode function
    temp1 = createNode(1);
    // Important: Always check if node creation was successful
    if (temp1 == NULL) return NULL; // If 1st node fails, return NULL for the whole list

    temp2 = createNode(2);
    if (temp2 == NULL) {
        // If 2nd node fails, free the 1st node before returning
        free(temp1);
        return NULL;
    }

    temp3 = createNode(3);
    if (temp3 == NULL) {
        // If 3rd node fails, free the 1st and 2nd nodes before returning
        free(temp1);
        free(temp2);
        return NULL;
    }

    // Link the nodes together to form the list
    temp1->next = temp2; // Node 1 points to Node 2
    temp2->next = temp3; // Node 2 points to Node 3 (Node 3's next is already NULL)

    // Return the pointer to the first node (head) of the list
    return temp1; // temp1 is the head of the list "1 -> 2 -> 3"
}

// --- 4. Function to Print the Linked List ---
// This function traverses the linked list from the head to the end,
// printing the data of each node.
void printList(Node *head)
{
    Node *current = head; // Start from the head of the list

    printf("Linked List: ");
    while (current != NULL) // Loop until we reach the end of the list (NULL pointer)
    {
        printf("%d ", current->data); // Print the data of the current node
        current = current->next;      // Move to the next node
    }
    printf("\n");
}

// --- 5. Function to Free the Linked List Memory ---
// This is crucial for avoiding memory leaks. It traverses the list
// and frees each node's memory.
void freeList(Node *head)
{
    Node *current = head;
    Node *next_node;

    while (current != NULL)
    {
        next_node = current->next; // Store the next node's address before freeing current
        free(current);             // Free the memory of the current node
        current = next_node;       // Move to the next node
    }
    printf("Linked list memory freed.\n");
}

// --- 6. Main Function (Entry Point of the Program) ---
int main()
{
    Node *myListHead = NULL; // Initialize head pointer to NULL

    printf("Attempting to build a 1->2->3 linked list...\n");
    myListHead = build123List(); // Call the function to build the list

    if (myListHead != NULL)
    {
        printf("List built successfully.\n");
        printList(myListHead); // Print the contents of the list

        // --- Important: Free the allocated memory when done ---
        freeList(myListHead);
    }
    else
    {
        printf("Failed to build the linked list. (Memory allocation error?)\n");
    }

    return 0; // Indicate successful program execution
}