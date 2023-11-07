#include <stdio.h>

int main()
{

    int a[10];
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        if (i >= 5)
        {
            a[i + 1] = a[i];
        }
    }
    a[5] = printf("Hello ");

    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
