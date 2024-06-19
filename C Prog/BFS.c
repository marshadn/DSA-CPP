
#include <stdio.h>
#include <stdlib.h>
int MAX = 10, rear = -1, front = -1;
int a[10];
void Enqueue(int n)
{
    int val;

    if (rear == MAX - 1)
        return;
    if (rear == -1)
        front = 0;
    rear++;
    a[rear] = n;
}

int Dequeue()
{
    if (front == -1)
        return -1;
    int v = a[front];
    front++;
    return v;
}

void main()
{
    int n, start;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    int a[n][n], v[n];
    printf("Enter Adjacency matrix for the graph:\n ");
    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
        for (int j = 0; j < n; j++)
            scanf("%d\t", &a[i][j]);
    }
    printf("Enter starting node (0-%d): ", (n - 1));
    scanf("%d", &start);
    printf("\nBFS Traversal: ");
    Enqueue(start);
    v[start] = 1;
    while (front <= rear)
    {
        start = Dequeue();
        printf("%d ", start);
        for (int i = 0; i < n; i++)
            if (a[start][i] == 1 && v[i] == 0)
            {
                Enqueue(i);
                v[i] = 1;
            }
    }
}

// #include <stdio.h>

// #include <stdlib.h>
// int MAX = 10;
// int front, rear = -1;
// int a[10];

// void Enqueue()
// {
//     int v;
//     if (rear == MAX - 1)
//         return;

//     else
//     {
//         if (rear == -1)
//             front = 0;
//         rear++;
//         a[rear] = v;
//     }
// }

// int Dequeue()
// {
//     if (front == -1)
//         return -1;

//     else
//     {
//         int val = a[front];
//         front++;
//         return val;
//     }
// }
// void main()
// {
//     int n, start;
//     printf("Enter the no.of nodes ");
//     scanf("%d", &n);
//     int a[n][n], v[n];
//     printf("Enter the adjacency Matrix :");
//     for (int i = 0; i < n; i++)
//     {
//         v[i] == 0;
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the starting node(0-%d):", (n - 1));
//     scanf("%d", &start);
//     Enqueue(start);
//     v[start] = 1;
//     printf("BFS\n");
//     while (front <= rear)
//     {
//         Dequeue();
//         printf("%d", start);
//         for (int i = 0; i < n; i++)

//             if (a[start][i] == 1 && v[i] == 0)
//             {
//                 Enqueue(i);
//                 v[i] == 1;
//             }
//     }
// }
