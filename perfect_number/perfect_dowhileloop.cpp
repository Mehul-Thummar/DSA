
// 6, 28, 496, 8128, 33550336.

#include <stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    } while (i < n);

    sum == n ? printf("%d is a Perfect Number.", n) : printf("%d is Not a Perfect Number.", n);
}