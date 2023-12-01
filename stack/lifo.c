#include <stdio.h>
#define n 5
int a[n], top = -1;

int display()
{
    if(top<0){
        printf("Stack is empty....");
    }
    else{
        for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    }
    printf("\n");
}

int insertEnd(int val)
{
    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}

int deletEnd()
{
    if (top < 0)
    {
        printf("Stack is already empty.....\n");
    }
    else
    {
        top--;
        // a[top] = top;
    }
}

int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    display();
    
    deletEnd();
    deletEnd();
    deletEnd();
    deletEnd();
    deletEnd();
    deletEnd();
    display();
}