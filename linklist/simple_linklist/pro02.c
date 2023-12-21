#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

void insertfirst(struct Node** head, int value) 
{
    
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    
    newNode->data = value;

    
    newNode->next = *head;

    
    *head = newNode;

}

void deletefirst(struct Node** head) 
{
    if (*head == NULL)
    {
        printf("Linked list is already empty.\n");
        return;
    }

    struct Node* temp = *head;
    *head = (*head)->next;
   
    free(temp);
}

void insertAtPosition(struct Node** head, int value, int position)
 {
    if (position <= 0) 
    {
        printf("Invalid position\n");
        return;
    }
    if (position == 1 || *head == NULL) 
    {
        insertfirst(head, value);
        return;
    }
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    struct Node* temp = *head;
    int count = 1;
    while (count < position - 1 && temp->next != NULL)
     {
        temp = temp->next;
        count++;
    }
    if (count < position - 1)
     {
        printf("Invalid position\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtPosition(struct Node** head, int position)
{
    if (*head == NULL) 
    {
        printf("Linked list is already empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* ptr = NULL;

    if (position == 1) 
    {
        *head = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position; i++) 
    {
        ptr = temp;
        temp = temp->next;
    }

    if (temp == NULL) 
    {
        printf("Invalid position.\n");
        return;
    }

    ptr->next = temp->next;
    
    free(temp);
}

void display(struct Node* head) 
{
    struct Node* temp = head;

    while (temp != NULL)
     {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
 {
    struct Node* head = NULL;

    insertfirst(&head, 3);
    insertfirst(&head, 2);
    insertfirst(&head, 1);
    insertfirst(&head, 4);
    insertfirst(&head, 5);
    insertfirst(&head, 6);



    printf("Linked List: ");
    display(head);

   
    deletefirst(&head);

    printf("Linked List after deletion at the beginning: ");
    display(head);

    insertAtPosition(&head, 25, 2);
    insertAtPosition(&head, 35, 4);
    printf("Linked list after insertion at specific positions: ");
    display(head);

    
    deleteAtPosition(&head, 1);

    printf("Linked List after deletion at a specific position: ");
    display(head);

    return 0;
}