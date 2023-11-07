#include <stdio.h>

int main()
{
    int b;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // To find index place

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 8)
        {
            b = i;
        }
    }
    printf("Index position : %d\n", b);

    for (int i = 0; i < 10; i++)
    {
        if (i < 4)
        {
            a[i] = a[i];
        }
        else if (i >= 4)
        {
            a[i] = a[i + 1];
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
