#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Function to create a new node
struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the circular linked list
struct node *insertAtBeginning(struct node *head, int data)
{
    struct node *newNode = createNode(data);

    if (head == NULL)
    {
        newNode->next = newNode; // Point to itself for the first node
        return newNode;
    }

    newNode->next = head->next;
    head->next = newNode;

     return head;
}

// Function to insert a node at a specific position in the circular linked list
struct node *insertAtPosition(struct node *head, int data, int position)
{
    if (position <= 0)
    {
        printf("Invalid position. Please enter a positive position.\n");
        return head;
    }

    struct node *newNode = createNode(data);

    if (head == NULL)
    {
        newNode->next = newNode; // Point to itself for the first node
        return newNode;
    }

    if (position == 1)
    {
        newNode->next = head->next;
        head->next = newNode;
        return head;
    }

    struct node *temp = head->next;
    int i;
    for (i = 1; i < position - 1 && temp != head; i++)
    {
        temp = temp->next;
    }

    if (temp == head && i != position - 1)
    {
        printf("Invalid position to insert. List is not long enough.\n");
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Function to insert a node at the end of the circular linked list
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *newNode = createNode(data);

    if (head == NULL)
    {
        newNode->next = newNode; // Point to itself for the first node
        return newNode;
    }

    newNode->next = head->next;
    head->next = newNode;
    return newNode;
}

// Function to delete the first node from the circular linked list
struct node *deleteAtBeginning(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty. Deletion not possible.\n");
        return NULL;
    }

    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    struct node *temp = head->next;
    head->next = temp->next;
    free(temp);

    return head;
}

// Function to delete a node at a specific position in the circular linked list
struct node *deleteAtPosition(struct node *head, int position)
{
    if (head == NULL)
    {
        printf("List is empty. Deletion not possible.\n");
        return NULL;
    }

    if (position <= 0)
    {
        printf("Invalid position. Please enter a positive position.\n");
        return head;
    }

    if (position == 1)
    {
        return deleteAtBeginning(head);
    }

    struct node *temp = head->next;
    struct node *prev = head;
    int i;

    for (i = 1; i < position - 1 && temp != head; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == head || i != position - 1)
    {
        printf("Invalid position to delete. List is not long enough.\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);

    return head;
}

// Function to delete the last node from the circular linked list
struct node *deleteAtEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty. Deletion not possible.\n");
        return NULL;
    }

    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    struct node *temp = head->next;
    struct node *prev = head;

    while (temp->next != head)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    free(temp);

    return head;
}

// Function to search for a value in the circular linked list
void search(struct node *head, int value)
{
    if (head == NULL)
    {
        printf("List is empty. Search not possible.\n");
        return;
    }

    struct node *temp = head->next;
    do
    {
        if (temp->data == value)
        {
            printf("Value %d found in the list.\n", value);
            return;
        }
        temp = temp->next;
    } while (temp != head->next);

    printf("Value %d not found in the list.\n", value);
}

// Function to display the circular linked list
void displayList(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head->next;
    printf("Circular Linked List: ");
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head->next);
    printf("(head)\n");
}

int main()
{
    struct node *head = NULL;
    int choice, data, searchValue, deleteValue, position;

    while (1)
    {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at a Specific Position\n");
        printf("3. Insert at End\n");
        printf("4. Delete at Beginning\n");
        printf("5. Delete at a Specific Position\n");
        printf("6. Delete at End\n");
        printf("7. Display List\n");
        printf("8. Search\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data to insert at the beginning: ");
            scanf("%d", &data);
            head = insertAtBeginning(head, data);
            break;
        case 2:
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            head = insertAtPosition(head, data, position);
            break;
        case 3:
            printf("Enter the data to insert at the end: ");
            scanf("%d", &data);
            head = insertAtEnd(head, data);
            break;
        case 4:
            head = deleteAtBeginning(head);
            break;
        case 5:
            printf("Enter the position to delete: ");
            scanf("%d", &position);
            head = deleteAtPosition(head, position);
            break;
        case 6:
            head = deleteAtEnd(head);
            break;
        case 7:
            displayList(head);
            break;
        case 8:
            printf("Enter the value to search: ");
            scanf("%d", &searchValue);
            search(head, searchValue);
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
