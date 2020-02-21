#include <stdio.h>
int main()
{

    char op;
    int operando1, operando2;
    int resultado;

    print("Qual operação realizar?\n");
    scanf("%c", &op);
    printf("Qual o primeiro operador");
    scanf("%d", &operando1);
    printf("Qual o segundo operador");
    scanf("%d", &operando2);
    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", operando1, operando2, operando1 + operando2);
        break;
    case '-':
        printf("%d - %d = %d\n", operando1, operando2, operando1 - operando2);
        break;
    case 'x':
        printf("%d * %d = %d\n", operando1, operando2, operando1 * operando2);
        break;
    case '/':
        printf("%d / %d = %d\n", operando1, operando2, operando1 / operando2);
        break;
    }
    return 0;
}
