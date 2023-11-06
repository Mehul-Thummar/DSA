
// 6, 28, 496, 8128, 33550336.

#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    sum == n ? printf("%d is a Perfect Number.", n) : printf("%d is Not a Perfect Number.", n);

    return 0;
}