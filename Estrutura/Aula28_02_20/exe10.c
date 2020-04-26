#include <stdio.h>

double calcula_media(int v[], int n)
{
    double soma = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        soma += v[i];
    }
    return soma / n;
}

int main()
{
    int v[4];
    double media = calcula_media(v, 4);
    printf("%.2f\n", media)
    return 0;
}

// O que é uma variável estática? É uma variável alocada em tempo de execuçao
// vetor é um ponteiro!