#include <stdio.h>

int main()
{
    int j = 0, n;
    int a[10] = {1, 85, 8, 4, 1, 54, 7, 1, 30, 9};
    printf("Enter search number:");
    scanf("%d" ,&n);
    for (int i = 0; i < 10; i++)
    {
        // a[i] == rand() % 20 + 1;
        if (a[i] == n)
        {
            j++;
        }
    }
    if (j > 0)
    {
        printf("Yes it is present");
    }
    else
    {
        printf("Not it is not present");
    }
}