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
                temp = arr[i];

                arr[i] = arr[j];

                arr[j] = temp;
            }
        }
    }
}

void binary_search(int arr[], int min, int max, int key)

{

    int mid;

    if (min > max)

    {

        printf("Key not found\n");

        return;
    }

    mid = (min + max) / 2;

    if (arr[mid] == key)

    {

        printf("Key found\n");
    }

    else if (arr[mid] > key)

    {

        binary_search(arr, min, mid - 1, key);
    }

    else if (arr[mid] < key)

    {

        binary_search(arr, mid + 1, max, key);
    }
}
int main()

{

    int key, n, i;

    int arr[25];

    printf("Enter n of a arr: ");

    scanf("%d", &n);

    printf("Enter elements\n");

    for (i = 0; i < n; i++)

    {

        scanf("%d", &arr[i]);
    }

    bubble_sort(arr, n);

    printf("\n");

    printf("Enter key to search\n");

    scanf("%d", &key);

    binary_search(arr, 0, n, key);
}
