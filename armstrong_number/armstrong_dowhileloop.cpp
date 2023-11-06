
// 0 ,1 ,153 ,370 ,371 ,407
#include <stdio.h>

int main()
{
    int i, n, r, sum = 0;

    printf("Enter a value : ");
    scanf("%d", &n);
    i = n;

    do
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    } while (n != 0);

    sum == i ? printf("%d is an Armstrong number.\n", i) : printf("%d is not an Armstrong number.\n", i);

    return 0;
}