#include <stdio.h>

int main()
{

    int a[10] = {'S', 'K', 'I', 'L', 'L', 'Q', 'O', 'D', 'E'};

    for (int i = 9; i >= 0; i--)
    {
        if (i >= 5)
        {
            a[i + 1] = a[i];
        }
    }
    a[5] = '_';

    for (int i = 0; i <= 9; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}
