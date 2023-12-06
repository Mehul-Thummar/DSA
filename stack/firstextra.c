#include <stdio.h>
#define n 5
int a[n], top = 5;

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

int insertfirst(int val)
{
    if (top <= n - 5)
    {
        printf("Stack is full.....\n");
    }
    else
    {
        top++;
        a[top] = val;
    }
}

int deletfirst()
{
    if (top < 0)
    {
        printf("Stack is already empty.....\n");
    }
    else
    {
        top--;
        // a[top] = top;
    }
}

int main()
{
    insertfirst(10);
    insertfirst(20);
    insertfirst(30);
    insertfirst(40);
    insertfirst(50);
    insertfirst(60);
    display();
}

// void deletf()
// {
//     deletfirst();
//     deletfirst();
//     deletfirst();
//     deletfirst();
//     deletfirst();
//     deletfirst();
//     display();
// }

// int main()
// {

//     int i, lifo = 0;
//     for (i = 0; i <= 15; i++)
//     {
//         printf("Enter a Number of Select Iteam : ");
//         scanf("%d ", &lifo);

//         switch (lifo)
//         {
//         case 0:
//             break;
//         case 1:
//             d1.lifo1();
//             break;
//         case 2:
//             d1.stream2();
//             break;
//         case 3:
//             d1.stream3();
//             break;
//         case 4:
//             d1.stream4();
//             break;
//         case 5:
//             d1.stream5();
//             break;
//         case 6:
//             d1.stream6();
//             break;
//         case 7:
//             d1.stream7();
//             break;
//         case 8:
//             d1.stream8();
//             break;
//         case 9:
//             d1.stream9();
//             break;
//         case 10:
//             d1.stream10();
//             break;
//         default:
//                printf( "You Enter Wrong Value."
//                     << "\n";
//                break;
//         }
//         if (lifo == 0)
//         {
//             break;
//         }
//     }
// }