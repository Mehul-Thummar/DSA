#include <stdio.h>
#define n 5
int arr[5], f = -1, r = -1;

int display()
{
    int i = f;
    do
    {
        printf("%d ", arr[i]);
        i = (i + 1) % n;
    } while (i != (r + 1) % n);

    printf("\n");
}

int insert(int val)
{
    if (f == 0 && r == n - 1 || (f == r + 1))
    {
        printf("QUEUE IS FULL\n");
    }

    else
    {
        if (f == -1)
            f = 0;
        r = (r + 1) % n;
        arr[r] = val;
    }
}

int delete()
{
    if (f == -1 && r == -1)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
        if (f == r)
        {
            f = -1;
            r = -1;
        }
        else
        {
            f = (f + 1) % n;
        }
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();

    delete ();
    delete ();
    display();

    insert(60);
    insert(70);
    display();

    return 0;
}
