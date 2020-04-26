#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TESTANDO RETORNO DO RAND 
int main()
{
    int m, n;
    srand(time(0));
    m = rand();
    n = rand();
    printf("\nm original:  %d", m);
    printf("\nn original:  %d", n);
    printf("\nm normalizado:  %d", m);
    printf("\nn normalizado:  %d", n);
    return 0;
}


