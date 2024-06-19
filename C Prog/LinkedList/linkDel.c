#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct node
{
    int data;
    struct node *next; 
};

// Function to add a new node at the end of the linked list
struct node *addAtEnd(struct node *head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        return newNode;
    }

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to display the elements of the linked list
void displayList(struct node *head)
{
    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete a node from the beginning of the linked list
struct node *deleteAtBeginning(struct node *head)
{
    if (head == NULL)
    {
        printf("The list is empty. Nothing to delete.\n");
        return head;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Function to delete a node from a specific position in the linked list
struct node *deleteAtPosition(struct node *head, int position)
{
    if (head == NULL)
    {
        printf("The list is empty. Nothing to delete.\n");
        return head;
    }

    if (position == 1)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *current = head;
    struct node *previous = NULL;
    int count = 1;

    while (current != NULL && count < position)
    {
        previous = current;
        current = current->next;
        count++;
    }

    if (current == NULL)
    {
        printf("Invalid position. List is not long enough to delete at position %d.\n", position);
        return head;
    }

    previous->next = current->next;
    free(current);
    return head;
}

// Function to delete a node from the end of the linked list
struct node *deleteAtEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("The list is empty. Nothing to delete.\n");
        return head;
    }

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct node *current = head;
    struct node *previous = NULL;

    while (current->next != NULL)
    {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    free(current);
    return head;
}

void main()
{
    struct node *head = NULL;
    int choice, data, position;

    while (1)
    {
        printf("\nLinked List Operations:\n");
        printf("1. Add at End\n");
        printf("2. Delete at Beginning\n");
        printf("3. Delete at a Specific Position\n");
        printf("4. Delete at End\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to add at the end: ");
            scanf("%d", &data);
            head = addAtEnd(head, data);
            break;
        case 2:
            head = deleteAtBeginning(head);
            break;
        case 3:
            printf("Enter the position to delete: ");
            scanf("%d", &position);
            head = deleteAtPosition(head, position);
            break;
        case 4:
            head = deleteAtEnd(head);
            break;
        case 5:
            displayList(head);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}