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
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;

    head = temp;
}
void insertMid(int position, int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    while (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    return;
}

void deleteend()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("List is already empty.\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        free(ptr);
    }
    return;
}

void deletefirst()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("List is already empty.\n");
    }
    if (head = ptr->next)
    {
        head = NULL;
        free(ptr);
    }
}

void deletemid(int position)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != position)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = ptr->next;
    free(ptr);
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
    insertend(80);
    insertfirst(100);
    // insertMid(60,90);

    display();

    deleteend();
    deleteend();
    deleteend();
    deleteend();
    deleteend();
    deleteend();
    deleteend();
    deleteend();
    deletefirst();

    display();
}