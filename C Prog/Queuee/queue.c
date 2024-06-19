// #include <stdio.h>
// int MAX = 10, rear = -1, front = -1;
// int a[10];

// void Enqueue()
// {
//     int val;

//     if (rear == MAX - 1)
//         printf("\n QUEUE OVERFLOW!!!");
//     else
//     {
//         printf("\n Enter value to be inserted: ");
//         scanf("%d", &val);
//         if (rear == -1)
//             front = 0;
//         rear++;
//         a[rear] = val;
//         printf("\n %d inserted to the queue", val);
//     }
// }

// void Dequeue()
// {
//     if (front == -1)
//         printf("\n QUEUE UNDERFLOW!!!");
//     else
//     {
//         int value;
//         value = a[front];
//         front++;
//         if (front > rear)
//         {
//             front = rear = -1;
//         }
//         printf("\n Removed Element: %d", value);
//     }
// }

// int peek()
// {
//     if (rear == -1)
//         printf("\n QUEUE EMPTY!!!!");
//     else
//     {
//         printf("\n Element in rear position of queue is %d", a[rear]);
//         printf("\n Element in front position of queue is %d", a[front]);
//     }
// }

// void display()
// {
//     if (rear == -1)
//         printf("\n QUEUE EMPTY!!!!");
//     else
//     {
//         printf("\n QUEUE ELEMENTS: ");
//         for (int i = front; i <= rear; i++)
//             printf("%d ", a[i]);
//     }
// }

// void main()
// {
//     int ch = 4;
//     printf("Enter max size of queue: ");
//     scanf("%d", &MAX);
//     do
//     {
//         printf("\n 1: Insertion\n 2: Deletion\n 3: Queue Display\n 4: Peek\n 5: Exit\n Enter your choice: ");

//         scanf("%d", &ch);
//         switch (ch)
//         {
//         case 1:
//             Enqueue();
//             break;
//         case 2:
//             Dequeue();
//             break;
//         case 3:
//             display();
//             break;
//         case 4:
//             peek();
//             break;
//         }
//     }
//     while (ch < 5);
// }

#include <stdio.h>
#include <stdlib.h>
int MAX = 10;
int array[10];
int front = -1, rear = -1;

void Enqueue()
{
    int value;
    if (rear == MAX - 1)
    {
        printf("OVERFLOW!!!");
    }
    else
    {
        printf("\nEnter the value to be inserted:");
        scanf("%d", &value);
        if (rear == -1)
            front = 0;
        rear++;
        array[rear] = value;

        printf("\n%d inserted to the queue", value);
    }
}

void Dequeue()
{
    if (front == -1)
    {
        printf("\nUNDERFLOW!!!");
    }
    else
    {
        int value;
        value = array[front];
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
        printf("\n%d Deleted from queue", value);
    }
}

void peek()
{
    if (rear == -1)
        printf("\nUNDERFLOW!!!");
    else
    {
        printf("\nThe element at the front of the Queue is %d\n", array[front]);
        printf("\nThe element at the rear of the Queue is %d\n", array[rear]);
    }
}

void display()
{
    if (rear == -1)
        printf("\nUNDERFLOW!!!");
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", array[i]);
        }
    }
}
void main()
{
    int choice;
    do
    {
        printf("\nQueue Operations:\n 1.Insertion\n2.Deletion\n3.Peek\n4.Display\n5.Exit ");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting The programe!!");
            exit(0);
            break;
        default:
            printf("Please Enter a Valid Choice!!");
            break;
        }
    } while (choice < 5);
}
