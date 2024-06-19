#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *linkedListTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    // Check if memory allocation is successful
    if (head == NULL || second == NULL || third == NULL || fourth == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // linking head and second
    head->data = 7;
    head->next = second;

    // linking second and third
    second->data = 11;
    second->next = third;

    // linking 3rd and 4th
    third->data = 66;
    third->next = fourth;

    // linking 4th and null
    fourth->data = 89;
    fourth->next = NULL;

    linkedListTraversal(head);

    // Free the allocated memory
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}
