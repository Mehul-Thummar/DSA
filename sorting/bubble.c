#include <stdio.h>

int main()
{
    int i, j, k;
    int a[10] = {11, 80, 25, 55, 20, 8, 5, 15, 30, 90};

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)

            if (a[j] > a[j + 1])
            {
                // a[j + 1];
                //   printf("%d ", a[i]);
                k = a[j + 1];
                a[j + 1] = a[j];
                a[j] = k;
            }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}