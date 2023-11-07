#include <stdio.h>

int main()

{

    int mat[5], guj[5], com[5], total[5], per[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter %d students marks : \n", i + 1);

        printf("Enter English marks : ");
        scanf("%d", &mat[i]);

        printf("Enter Gujrati marks : ");
        scanf("%d", &guj[i]);

        printf("Enter Computer marks : ");
        scanf("%d", &com[i]);

        total[i] = mat[i] + guj[i] + com[i];
        per[i] = (total[i] * 100) / 300;
    }

    printf("\nNo.\tmat\tguj\tcom\ttotal\tper\t\n");

    for (i = 1; i <= 5; i++)
    {
        printf("\n%d\t%d\t%d\t%d\t%d\t%d\t", i, mat[i], guj[i], com[i], total[i], per[i]);

        if (per[i] <= 35)
        {
            printf("Studen is fail");
        }
        else if (per[i] >= 90)
        {
            printf(" Grade A ");
        }
        else if (80 <= per[i] <= 90)
        {
            printf(" Grade B ");
        }
        else if (70 <= per[i] <= 80)
        {
            printf(" Grade C ");
        }
        else if (60 <= per[i] <= 70)
        {
            printf(" Grade D ");
        }
        else
        {
            printf(" Grade E ");
        }
    }

    return 0;
}