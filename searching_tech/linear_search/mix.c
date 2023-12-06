#include <stdio.h>
#include <stdlib.h>

int main()
{

    int j, a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 50 + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    int no;
    printf("\nEnter the value you want to search: ");
    scanf("%d", &no);
    if (j > 0)
    {
        printf("Yes it is present");
    }
    else
    {
        printf("Not it is not present");
    }
}