#include <stdio.h>

int main()
{
    int i, j;
    int a[10] = {11, 80, 25, 55, 20, 8, 5, 15, 30, 90};

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)

            if (a[i] < a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}