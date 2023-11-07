#include <stdio.h>

int main()
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 9; i >= 0; i--)
    {
        if (i >= 5)
        {
            a[i + 1] = a[i];
        }
    }
    a[5] = 200;

    for (int i = 0; i <= 10; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
