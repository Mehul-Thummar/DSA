// two array merge

#include <stdio.h>

int main()
{
    char a[100], b[100];
    char c[100];
    int i = 0, j = 0;
    printf("enter value:");
    scanf("%s", &a);

    printf("enter value:");
    scanf("%s", &b);
    for (i = 0; a[i] != '\0'; i++)
    {
        c[j] = a[i];
        j++;
    }
    for (i = 0; b[i] != '\0'; i++)
    {
        c[j] = b[i];
        j++;
    }
    c[j] = '\0';

    printf("joint :%s ", c);
}