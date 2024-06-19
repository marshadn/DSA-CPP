
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

// Structure to represent a circular queue
struct CircularQueue
{
    int items[MAX_SIZE];
    int front, rear;
};

// Function to initialize the circular queue
void initializeQueue(struct CircularQueue *queue)
{
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(struct CircularQueue *queue)
{
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(struct CircularQueue *queue)
{
    return (queue->front == (queue->rear + 1) % MAX_SIZE);
}

// Function to insert an element at the rear of the queue
void enqueue(struct CircularQueue *queue, int data)
{
    if (isFull(queue))
    {
        printf("Queue is full. Cannot enqueue %d\n", data);
    }
    else
    {
        if (isEmpty(queue))
        {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = data;
        printf("%d enqueued to the queue\n", data);
    }
}
 
// Function to remove an element from the front of the queue
void dequeue(struct CircularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty. Cannot dequeue.\n");
    }
    else
    {
        int data = queue->items[queue->front];
        printf("%d dequeued from the queue\n", data);
        if (queue->front == queue->rear)
        {
            // Last element in the queue
            queue->front = -1;
            queue->rear = -1;
        }
        else
        {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
    }
}

// Function to display the elements of the queue
void displayQueue(struct CircularQueue *queue)
{
    if (isEmpty(queue))
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Elements in the queue: ");
        int i = queue->front;
        do
        {
            printf("%d ", queue->items[i]);
            i = (i + 1) % MAX_SIZE;
        } while (i != (queue->rear + 1) % MAX_SIZE);
        printf("\n");
    }
}

int main()
{
    struct CircularQueue queue;
    initializeQueue(&queue);

    int choice, data;

    do
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display Queue\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to enqueue: ");
            scanf("%d", &data);
            enqueue(&queue, data);
            break;

        case 2:
            dequeue(&queue);
            break;

        case 3:
            displayQueue(&queue);
            break;

        case 0:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
 