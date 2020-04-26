#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//  NESTE CASO PODE ACONTECER DE VIR 2 NUMEROS IGUAIS 
int main()
{
    int v[6], i;
    srand(time(0));
    for (i = 0; i < 6; i++)
    {
        v[i] = rand() % 60 + 1;
        printf("%d", v[i]);
    }
    return 0;
}
