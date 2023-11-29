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
    int i, j, k, x = 6, mid, min, max, result;
    int arr[10] = {1, 1, 7, 1, 4, 1, 6, 1, 2, 1};

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

    min = arr[0];
    max = arr[9];

    result = binary_search(x, min, max);

    if (result == 1)
    {
        printf("\nX is present in an array");
    }
    

    return 0;
}