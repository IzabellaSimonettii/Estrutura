#include <stdio.h>

void mair_numero_v1(int a, int b)
{
    if (a > b)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", b);
    }
}

void mair_numero_v2(int a, int b)
{
    printf("%d\n", a > b ? a : b);
}

void mair_numero_v3(int a, int b)
{
    switch (a > b)
    {
    case 0:
        printf("%d\n", b);
        break;

    default:
        printf("%d\n", a);
        break;
    }
}


