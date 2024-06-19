#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Stack
{
    struct Node *top;
};
     
void initialize(struct Stack *stack)
{
    stack->top = NULL;
}

int isEmpty(struct Stack *stack)
{
    return stack->top == NULL;
}

void push(struct Stack *stack, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;

    printf("%d pushed to the stack\n", data);
}

void pop(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow: Cannot pop, stack is empty\n");
    }
    else
    {
        struct Node *temp = stack->top;
        printf("%d popped from the stack\n", temp->data);
        stack->top = temp->next;
        free(temp);
    }
}

int peek(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1; // Assuming -1 represents an error or an invalid value
    }
    else
    {
        return stack->top->data;
    }
}

void display(struct Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: ");
        struct Node *current = stack->top;
        while (current != NULL)
        {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int search(struct Stack *stack, int data)
{
    struct Node *current = stack->top;
    int position = 1;

    while (current != NULL)
    {
        if (current->data == data)
        {
            return position;
        }
        current = current->next;
        position++;
    }

    return -1; // Element not found
}

int main()
{
    struct Stack stack;
    initialize(&stack);

    int choice, data;

    do
    {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Search\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to push: ");
            scanf("%d", &data);
            push(&stack, data);
            break;
        case 2:
            pop(&stack);
            break;
        case 3:
            data = peek(&stack);
            if (data != -1)
            {
                printf("Top element: %d\n", data);
            }
            break;
        case 4:
            display(&stack);
            break;
        case 5:
            printf("Enter element to search: ");
            scanf("%d", &data);
            int position = search(&stack, data);
            if (position != -1)
            {
                printf("%d found at position %d in the stack\n", data, position);
            }
            else
            {
                printf("%d not found in the stack\n", data);
            }
            break;
        case 0:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 0);

    return 0;
}
