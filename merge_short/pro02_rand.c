#include <stdio.h>
#include <>

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
    int arr1[15], n = 15, i;
    for (i = 0; i < n; i++)
    {
        arr1[i] = rand() % 99 + 1;
        printf("Before shorting Array is:\n");
    }
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
