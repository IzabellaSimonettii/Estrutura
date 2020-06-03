/* Escreva um programa em C que encontra o maior elemento 
em um vetor de 10 valores digitados pelo usuário */

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int vetor[10];
  int maior = 0;
  int i, pos_maior;

  printf("Digite 10 valores: /n");
  pos_maior = 0;

  for (i = 0; i < 10; i++)
  {
    printf("Informe o valor");
    scanf("%d", &vetor[i]);
  };

  for (i = 0; i < 10; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
      pos_maior = i;
    }
    printf("O maior número é o %d e esta na posicao %d", maior, vetor[pos_maior]);
  };
}
