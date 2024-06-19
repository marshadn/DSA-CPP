#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

// Function to add a new node to the beginning of the doubly linked list
struct node *addAtBeginning(struct node *head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newNode;
    }

    return newNode;
}

// Function to add a new node at a specific position in the doubly linked list
struct node *addAtPosition(struct node *head, int data, int position)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (position == 1)
    {
        newNode->next = head;
        newNode->prev = NULL;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        return newNode;
    }

    struct node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid position to insert. List is not long enough.\n");
        return head;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }
    temp->next = newNode;

    return head;
}

// Function to add a new node to the end of the doubly linked list
struct node *addAtEnd(struct node *head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        newNode->prev = NULL;
        return newNode;
    }

    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

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

// Function to search for a value in the doubly linked list
void search(struct node *head, int value)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Value %d found in the list.\n", value);
            return;
        }
        temp = temp->next;
    }
    printf("Value %d not found in the list.\n", value);
}

int main()
{
    struct node *head = NULL;
    int choice, data, position, searchValue;

    while (1)
    {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Add at Beginning\n");
        printf("2. Add at a Specific Position\n");
        printf("3. Add at End\n");
        printf("4. Display List\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to add at the beginning: ");
            scanf("%d", &data);
            head = addAtBeginning(head, data);
            break;
        case 2:
            printf("Enter the data to add: ");
            scanf("%d", &data);
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            head = addAtPosition(head, data, position);
            break;
        case 3:
            printf("Enter the data to add at the end: ");
            scanf("%d", &data);
            head = addAtEnd(head, data);
            break;
        case 4:
            displayList(head);
            break;
        case 5:
            printf("Enter the value to search: ");
            scanf("%d", &searchValue);
            search(head, searchValue);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
