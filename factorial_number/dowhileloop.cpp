#include <stdio.h>

int main()
{
    int n, i = 1, f = 1;

    printf("Enter The Number:");
    scanf("%d", &n);

    do
    {
        f = f * i;
        i++;
    } while (i <= n);

    printf("The Factorial of %d is %d", n, f);
}