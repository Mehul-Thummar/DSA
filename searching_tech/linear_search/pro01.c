#include <stdio.h>

int main()
{

    int a[10] = {1, 2, 8, 4, 1, 2, 7, 1, 2, 9};

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 2)
        {
            printf("Index position : %d\n", i);
        }
    }
}