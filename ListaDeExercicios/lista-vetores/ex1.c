
/* ESCREVA UM PROGRAMA EM C QUE LE 15 INTEIROS E OS ARMAZENA EM UM VETOR.
A seguir, o programa exibe cada numero seguido da mensagem "par" ou "Impar".*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
  int vetor[15];
  int i;

  printf("Digite 15 valores: /n");

  for (i = 0; i < 15; i++)
  {
    printf("Informe o valor");
    scanf("%f", &vetor[i]);
  };

  for (i = 0; i < 15; i++)
  {
    printf("O elemento %d do vetor = %d \n", i, vetor[i]);

    if (i % 2 == 0)
    {
      printf("É um numero par.");
    }
    else
    {
      printf("É um numero impar.");
    }
  };
}
