#include <stdio.h>
#define n 5
int a[n], top = -1;

int display()
{
    if (top < 0)
    {
        printf("Stack is empty.....");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int insertfirst(int val)
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

int main()
{
    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    insertfirst(50);
    insertfirst(60);
    display();
}