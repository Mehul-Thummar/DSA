void insertMid(int pos,int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;

    while (ptr->data != pos)
    {
      ptr = ptr->next;
    }
    temp->next = ptr ->next;
    ptr -> next = temp;
    return;
}
void deletemid(int position){
      struct node *ptr = head;
    struct node *prev;

     while(ptr -> data != position){
        prev = ptr;
        ptr = ptr -> next;
    }

    prev -> next = ptr -> next;
    free(ptr);
    return;
}