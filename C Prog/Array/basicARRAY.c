#include <stdio.h>
#include <stdlib.h>

void insertion();
void display();
void deletion();
void search();
int n, ch, i, arr[100];

int main()
{
    printf("Enter the size of array:");
    scanf("%d", &n);
    printf("Enter numbers:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    while (1)
    {
        printf("\nSelect your choice:\n1.Insertion\n2.Deletion\n3.Search\n4.Display\n5.Exit");
        printf("Enter your choice of operations:");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            search();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exit");
            exit(0);
        default:
            printf("Invalid choice!!");
            break;
        }
    }
    return 0;
}

void insertion()
{
}