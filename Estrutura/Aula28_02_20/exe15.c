#include <stdio.h>

int contem(int v[], int n, int e)
{

    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (v[i] == e)
            return 1;
    }
    return 0;
}
int calcula_vetor_c(int a[], int nA, int b[], int nB, int c[], int nC)
{
    int qtdeC = 0;
    int i;
    for (i = 0; i < nA; i++)
    {
        if (!contem(C, nA, A[i]))
            C[qtdC++] = A[i];
    }
    for (i = 0; i < nB; i++)
    {
        if (!contem(C, nB, B[i]))
            C[qtdC++] = B[i];
    }
    return qtdeC;
}

int main()
{
    int v1[] = {1, 2, 3, 4, 1};
    int v1[] = {1, 1, 1, 1, 2};
    int C[10];

    int qtdeC = calcula_vetor_c(v1, 5, v2, 5, C, 10);
    int i;
    for (i = 0; i < qtdeC; i++)
        printf("%d", C[i]);
    return 0;
}