#include <stdio.h>
#define n 5
int arr[5], f = -1, r = -1;

int display()
{
    int i = f;
    do
    {
        printf("%d ", arr[i]);
        if (i == r)
            break;
        i = (i + 1) % n;
    } while (i != f);
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
int insertfirst(int val)
{
    if ((f == 0 && r == n - 1) || (f == r + 1))
    {
        printf("DeQueue Is Full\n");
    }

    if (f == -1)
    {
        f = 0;
        r = 0;
    }
    else if (f == 0)
    {
        f = n - 1;
    }
    else
    {
        f--;
    }

    arr[f] = val;
}

int deletend()
{
    if (f = -1)
    {
        printf("DeQueue is Empty\n");
        // return 0;
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        r--;
    }
}

int main()
{
    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    insertfirst(50);
    // insertfirst(60);
    display();

    // deletend();
    // deletend();
    // deletend();
    // deletend();
    // deletend();
    // deletend();
    display();

    return 0;
}