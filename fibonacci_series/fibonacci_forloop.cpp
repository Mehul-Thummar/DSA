#include <stdio.h>
int main()
{
    int i, n = 1, a = 0, b, c;

    printf("Enter value : ");
    scanf("%d", &c);
    printf("%d ", n);

    for (i = 2; i <= c; i++)
    {
        b = a + n;
        printf("%d ", b);
        a = n;
        n = b;
    }

    return 0;
}
