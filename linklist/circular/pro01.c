#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;
    if (head == head)
    {
        head = temp;
        return;
    }

    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}

void deleteend()
{
    struct node *ptr = head, *p;

    if (head->next == head)
    {
        head = head;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = head;
        free(ptr);
    }
    return;
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    insertend(70);
    deleteend();
    insertend(80);
    insertend(90);

    display();
}