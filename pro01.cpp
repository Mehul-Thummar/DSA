#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter A value :");
    scanf("%d", &a);
    printf("Enter B value :");
    scanf("%d", &b);
    printf("Enter C value :");
    scanf("%d", &c);

    a > b && a > c ? printf("A is big") : (b > c ? printf("B is big") : printf("C is big"));
}