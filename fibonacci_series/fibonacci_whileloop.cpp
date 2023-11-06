#include <stdio.h>
int main()
{
    int i = 2, n = 1, a = 0, b, c;

    printf("enter value:");
    scanf("%d", &c);
    printf("%d ", n);
    while (i <= c)
    {
        b = a + n;
        printf("%d ", b);
        a = n;
        n = b;
        i++;
    }
}