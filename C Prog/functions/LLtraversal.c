#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    void linkedListTraversal(struct node * ptr)
    {
        while (ptr != NULL)
        {
            printf("Elements:%d", ptr->data);
            ptr = ptr->next;
        }
    }
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)sizeof(struct node);
    second = (struct node *)sizeof(struct node);
    third = (struct node *)sizeof(struct node);
    fourth = (struct node *)sizeof(struct node);

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
    return 0;
}