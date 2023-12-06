#include <stdio.h>
#define n 5
int arr[5], top = -1, b[5];

int display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertfirst(int val)
{
    int a, b;
    if (top == -1)
    {
        top++;
        arr[top] = val;
    }
    else if (top >= 4)
    {
        printf("STACK IS FULL");
    }
    else
    {
        top++;
        b = top - 1;

        for (int i = top; i > 0; i--)
        {
            arr[i] = arr[b];
            b--;
        }
        arr[0] = val;
    }
}

int deletefirst()
{
    int a = 1;

    if (top == -1)
    {
        printf("SSTACK IS EMPTY");
    }

    else
    {
        for (int i = 0; i <= top; i++)
        {
            arr[i] = arr[a];
            a++;
        }
    }
    top--;
}

int main()
{

    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    deletefirst();
    deletefirst();

    display();

    return 0;
}