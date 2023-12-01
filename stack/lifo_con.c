#include <stdio.h>
#define n 5
int a[n], top = -1, j = 0;

int display()
{
    if (top < 0)
    {
        printf("Stack is empty....");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int insertEnd()
{
    do
    {
        printf("Enter Value: ");
        scanf("%d ", &j);
    } while (j = 0);

    if (top >= n - 1)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        a[top] = j;
    }
}


int main()
{

     insertEnd();

    // for (int i = 0; i <= 5; i++)
    // {
    //     printf("Enter Value : ");
    //     scanf("%d ", &j);
    //     switch (j)
    //     {
    //     case 0:
    //         insertEnd();
    //         break;
    //     case 1:
    //         insertEnd();
    //         break;
    //     default:
    //         printf("You Enter Wrong Value.\n");
    //         break;
    //     }
    //     if (j == 0)
    //     {
    //         break;
    //     }
    // }

    // display();
    // display();
}