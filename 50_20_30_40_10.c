#include <stdio.h>

int main()
{
    int i, n = 0, j[5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter value :", i + 1);
        scanf("%d", &j[i]);
        n++;
    }

    n--;

    for (i = 0; i <= n; i++)
    {
        if (i == 0)
        {
            printf("%d ", j[n]);
        }

        else if (i == n)
        {
            printf("%d ", j[0]);
        }

        else
        {
            printf("%d ", j[i]);
        }
    }

    return 0;
}