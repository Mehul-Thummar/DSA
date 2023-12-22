#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

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
    ptr->prev = temp;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    temp->prev = head;

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
    temp->prev = NULL;

    while (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    temp->prev = ptr->prev;
    ptr->next = temp;
    ptr->prev = temp;
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
    printf("InsertEnd Position.\n");
    display();
    deleteEnd();
    deleteEnd();
    deleteEnd();
    deleteEnd();
    printf("DeleteEnd Position.\n");
    display();

    insertfirst(500);
    insertfirst(600);
    insertfirst(700);
    insertfirst(800);
    printf("InsertFirst Position.\n");
    display();
    deletefirst();
    deletefirst();
    deletefirst();
    printf("DeleteFirst Position.\n");
    display();

    insertmid(300, 900);
    printf("InsertMid Position.\n");
    display();

    deletemid(300);
    printf("DeleteMid Position.\n");
    display();

}