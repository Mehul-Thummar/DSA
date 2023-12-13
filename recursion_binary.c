#include <stdio.h>

void binary_search(int[], int, int, int);

void bubble_sort(int[], int);

void bubble_sort(int arr[], int n)

{
    int temp, i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                arr[j] = arr[i] + arr[j];
                arr[i] = arr[j] - arr[i];
                arr[j] = arr[j] - arr[i];
            }
        }
    }
}

void binary_search(int arr[], int min, int max, int result)
{
    int mid;
    if (min > max)
    {
        printf("Number not found");
        return;
    }
    mid = (min + max) / 2;

    if (arr[mid] == result)
    {
        printf("Number found");
    }
    else if (arr[mid] > result)
    {
        binary_search(arr, min, mid - 1, result);
    }
    else if (arr[mid] < result)
    {
        binary_search(arr, mid + 1, max, result);
    }
}

int main()
{
    int result, n, i;
    int arr[25];

    printf("Enter Number of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter elements:");
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);

    printf("Enter Number to search:");
    scanf("%d", &result);

    binary_search(arr, 0, n, result);
}
