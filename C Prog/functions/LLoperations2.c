#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node **head, int newData)
{
    // Allocate memory for the new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    // Check if memory allocation was successful
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    // Set the data and next pointer of the new node
    newNode->data = newData;
    newNode->next = *head;

    // Update the head to point to the new node
    *head = newNode;
}

// Function to print the linked list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    // Initialize an empty linked list
    struct Node *head = NULL;

    // Insert nodes at the beginning of the list
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    return 0;
}