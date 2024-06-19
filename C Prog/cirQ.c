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
            queue->rear = 0;
        }
        else
        {
            queue->rear = (queue->rear + 1) % MAX_SIZE;
        }
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

int main()
{
    struct CircularQueue queue;
    initializeQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);

    // Uncomment the following line to test enqueue when the queue is full
    // enqueue(&queue, 6);

    dequeue(&queue);
    dequeue(&queue);

    enqueue(&queue, 6);

    return 0;
}
