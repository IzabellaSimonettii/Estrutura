#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preeche_vetor(int v[], int t)
{
    int i;
    for (i = 0; i < t; i++)
    {
        v[i] = rand() % 100;
    }
}
void mostra_vetor(int v[], int t)
{
    int i;
    printf("\n");
    for (i = 0; i < t; i++)
    {
        printf(" %d ", v[i]);
    }
    printf("\n");
}
void bubble(int v[], int t)
{
    int i, j, aux;
    for (i = 1; i < t; i++)
    {
        for (j = 1; j < t - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int main()
{
    int t, *v;
    int ini, fim;
    srand(time(0));
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &t);
    v = (int *)malloc(t * sizeof(int));
    preeche_vetor(v, t);
    mostra_vetor(v, t);
    ini = time(0);
    bubble(v, t);
     fim = time(0);
     printf("\n Bubble demorrou %d segundos \n", fim - ini);
    // mostra_vetor(v, t);
    return 0;
}