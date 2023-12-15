#include <stdio.h>

void merge(int arr1[], int min, int mid, int max)
{
    int arr2[50];
    int i = min, j = mid + 1, k = min;
    while (i <= mid && j <= max)
    {
        if (arr1[i] < arr1[j])
        {
            arr2[k++] = arr1[i++];
        }
        else
        {
            arr2[k++] = arr1[j++];
        }
    }
    while (i <= mid)
    {
        arr2[k++] = arr1[i++];
    }
    while (j <= max)
    {
        arr2[k++] = arr1[j++];
    }
    for (i = min; i <= max; i++)
    {
        arr1[i] = arr2[i];
    }
}

int mergesort(int arr1[], int min, int max)
{
    int mid;
    if (min < max)
    {
        mid = (min + max) / 2;
        mergesort(arr1, min, mid);
        mergesort(arr1, mid + 1, max);
        merge(arr1, min, mid, max);
    }
}

int main()
{
    int arr1[10] = {20, 10, 4, 70, 56, 90, 18, 30, 3, 73}, n = 10, i;

    printf("Before shorting Array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }

    mergesort(arr1, 0, n - 1);
    printf("\nAfter shorting Array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
}
