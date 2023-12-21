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

    if (head == NULL)
    {
        head = temp;
        return;
    }
    head = temp;
}

void insertmid(int position, int val)
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

void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("list is alredey empty....");
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
        printf("list is alredey empty....");
    }
    else if (ptr = head)
    {
        head = head->next;
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
        printf("\nlist is empty...");
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
    insertend(100);
    insertend(200);
    insertend(300);
    insertend(400);
    insertend(500);
    insertend(600);
    insertend(700);
    insertend(800);
    printf("Insert End Position.\n");
    display();
    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    insertfirst(50);
    display();
    insertmid(30,800);
    display();
    deletefirst();
    deletefirst();
    deletefirst();
    deletefirst();
    deletefirst();
    deletefirst();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    // deleteEnd();
    display();
}