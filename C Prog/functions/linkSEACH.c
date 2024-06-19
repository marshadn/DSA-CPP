#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Function to add a new node at the end of the linked list
struct Node *addAtEnd(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        return newNode;
    }

    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to display the elements of the linked list
void displayList(struct Node *head)
{
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to search for a specific element in the linked list
int searchElement(struct Node *head, int target)
{
    int position = 1;
    struct Node *current = head;

    while (current != NULL)
    {
        if (current->data == target)
        {
            printf("Element %d found at position %d.\n", target, position);
            return position;
        }
        current = current->next;
        position++;
    }

    printf("Element %d not found in the list.\n", target);
    return -1; // Element not found
}

void main()
{
    struct Node *head = NULL;
    int choice, data, target;

    while (1)
    {
        printf("\nLinked List Operations:\n");
        printf("1. Add at End\n");
        printf("2. Search Element\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
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
            printf("Enter the element to search for: ");
            scanf("%d", &target);
            searchElement(head, target);
            break;
        case 3:
            displayList(head);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}