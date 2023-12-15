#include <stdio.h>
#include <stdlib.h>

int n;
void print(int a[])
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void quicksort(int a[], int first, int last)
{
    int i, j, pivot;
    if (first < last)
    {
        // print(a);
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (a[i] <= a[pivot] && i < last)
            {
                i++;
            }
            while (a[j] > a[pivot])
            {
                j--;
            }

            if (i < j)
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
            a[pivot] = a[pivot] + a[j];
            a[j] = a[pivot] - a[j];
            a[pivot] = a[j] - a[pivot];

            quicksort(a, first, j - 1);
            quicksort(a, j + 1, last);
        }
    }
}

int main()
{
    // int a[25], i;
    int a[] = {99, 32, 14, 90, 50, 70, 65, 20, 10, 80, 5, 75, 84, 23, 25};

    printf("How many element enter:");
    scanf("%d", &n);
    // for (i = 0; i < n; i++)
    // {
    //     a[i] = rand() % 99 + 1;
    // }
    print(a);
    quicksort(a, 0, n - 1);
    printf("\nAfter Quick sort:");
    print(a);
}