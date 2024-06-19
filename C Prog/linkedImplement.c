#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
// printing
void printLinkList(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    // initialize Nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate Memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // assign Values
    one->data = 1;
    two->data = 3;
    three->data = 45;
    // connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // printing valeus
    head = one;
    printLinkList(head);

    return 0;
}