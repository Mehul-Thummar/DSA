#include <stdio.h>

int main()
{
    int b;
    int a[10] = {1, 2, 8, 4, 1, 2, 7, 1, 2, 9};

    // To find place

    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 2)
        {
            printf("Index position : %d\n", i);
        }

    }
        
}