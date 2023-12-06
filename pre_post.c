#include <stdio.h>

int main()
{
    int a = 10;

    printf("A: %d A: %d", a, a++);
    printf("\nA: %d A: %d", a, ++a);
    printf("\nA: %d A: %d", a++, a++);
    printf("\nA: %d A: %d", a++, ++a);
    printf("\nA: %d A: %d", ++a, ++a);
    printf("\nA: %d A: %d A: %d", a, a++, a++);
    printf("\nA: %d A: %d A: %d", a, ++a, a++);
    printf("\nA: %d A: %d A: %d", a++, ++a, a++);
    printf("\nA: %d A: %d A: %d", a++, ++a, ++a);
    printf("\nA: %d A: %d A: %d", ++a, ++a, ++a);
    printf("\nA: %d A: %d A: %d", ++a, ++a, a++); 
    printf("\nA: %d A: %d A: %d", a++, ++a, a++);
    printf("\nA: %d A: %d A: %d", ++a, a++, ++a);
    printf("\nA: %d A: %d A: %d A: %d", a++, ++a, a++, ++a);

    // two array merge

    // 10 20 30 40 50 -- > 50 20 30 40 10

    // 10 20 30 40 50 -- > 20 30 40 50 10
}