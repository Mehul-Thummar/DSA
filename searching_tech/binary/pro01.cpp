#include <stdio.h>

int binary_search(int n, int min, int max)
{
    int mid;
    mid = min + (max - min) / 2;

    if (n == mid)
    {
        return 1;
    }
    else if (n > mid)
    {
        min = mid;
        return binary_search(n, min, max);
    }
    else if (n < mid)
    {
        max = mid;
        return binary_search(n, min, max);
    }
}

int main()
{
    int i, j, k, x = 11, mid, min, max, result;
    int arr[10] = {11, 13, 17, 21, 24, 31, 36, 51, 62, 80};
    for (i = 0; i < 9; i++)
    {

        for (j = 9; j >= i + 1; j--)
        {
            if (arr[i] > arr[j])
            {
                arr[j] = arr[i] + arr[j];
                arr[i] = arr[j] - arr[i];
                arr[j] = arr[j] - arr[i];
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nEnter search number:");
    scanf("%d", &k);

    min = arr[0];
    max = arr[9];

    result = binary_search(x, min, max);

    if (arr[i] == k)
    {
        printf("\nX is present in an array");
    }
    else
    {
        printf("\nX is not present in an array");
    }

    return 0;
}