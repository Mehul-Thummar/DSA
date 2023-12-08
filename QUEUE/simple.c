#include <stdio.h>
#define n 5
int arr[5], f = -1, r = -1;

int display()
{
    for (int i = f; i <= r; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertend(int val)
{
    if (r == n)
    {
        printf("QUEUE IS FULL\n");
    }

    if (f == -1 && r == -1)
    {
        f = 1;
        r = 0;
        arr[r] = val;
    }
    r++;
    arr[r] = val;
}

int deletefirst()
{
    f++;
    if (f == r)
    {
        f = -1;
        r = -1;
    }
    if (f == -1 && r == -1)
    {
        printf("QUEUE IS EMPTY");
    }
}

int main()
{
    insertend(10);
    insertend(20);
    insertend(30);
    insertend(40);
    insertend(50);
    insertend(60);
    display();

    deletefirst();
    deletefirst();
    deletefirst();
    deletefirst();
    deletefirst();
    deletefirst();
    display();
}
