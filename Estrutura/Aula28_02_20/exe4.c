#include <stdio.h>

int achar_maior(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int x, y;
    scanf("d" & x);
    scanf("d" & y);
    int r = achar_maior(x, y);
    printf("Maior: %d\n", r);
    return 0;
}

// O que é um ponteiro ?? É uma variavel que armazena um endereço 
// O que é uma variável automática? é uma variavel local uma vez que a funcao sai da pilha essas variáveis deixam de existir 
