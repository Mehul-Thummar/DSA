#include <stdio.h>
#include <stdlib.h>

void linearsearch(int arr[], int val)
{
    int found = 0;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == val)
        {
            printf("%d Exists \n", val);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("%d not exist \n", val);
    }
}

int main()
{

    int a[10];
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
    linearsearch(a, no);

    return 0;
}