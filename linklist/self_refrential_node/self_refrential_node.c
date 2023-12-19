#include <stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};

int main()
{
    struct node a, b, c, d;
    a.data = 10;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 20;
    b.ch = 'B';
    b.ptr = NULL;

    c.data = 30;
    c.ch = 'C';
    c.ptr = NULL;

    d.data = 40;
    d.ch = 'D';
    d.ptr = NULL;

    // printf("A Data: %d, Char: %c", a.data, a.ch);
    // printf("\nB Data: %d, Char: %c", b.data, b.ch);
    // printf("\nC Data: %d, Char: %c",c.data, c.ch);
    // printf("\nD Data: %d, Char: %c",d.data, d.ch);

    printf("\n");

    b.ptr = &a;
    printf("\nA Data: %d, Char: %c", b.ptr->data, b.ptr->ch);
    a.ptr = &b;
    printf("B Data: %d, Char: %c", a.ptr->data, a.ptr->ch);
    d.ptr = &c;
    printf("\nC Data: %d, Char: %c", d.ptr->data, d.ptr->ch);
    c.ptr = &d;
    printf("\nD Data: %d, Char: %c", c.ptr->data, c.ptr->ch);
}