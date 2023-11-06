#include <stdio.h>

int main()
{
    int n, i, f = 1;

    printf("Enter The Number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("The Factorial of %d is %d", n, f);
}