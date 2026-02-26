#include <stdio.h>

int main()
{
    int primeiroNumero = 1;
    int segundoNumero = 1;

    int soma = primeiroNumero + segundoNumero;

    if (soma > 10)
        printf("O valor da soma é maior que 10.\n");
    else if (soma < 10)
        printf("O valor da soma é menor que 10.\n");
    else
        printf("O valor da soma é igual a 10.\n");

    return 0;
}