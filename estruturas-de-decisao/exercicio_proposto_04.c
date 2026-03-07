// ** Exercício Proposto 04 **
// Faça um algoritmo que leia dois valores inteiros e mostre na tela no menor deles

#include <stdio.h>

int main()
{
    int primeiroNumero = 0;
    int segundoNumero = 0;

    printf("Digite o primeiro número:\n");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número:\n");
    scanf("%d", &segundoNumero);

    if (primeiroNumero < segundoNumero)
        printf("O menor número é %d.\n", primeiroNumero);
    else if (segundoNumero < primeiroNumero)
        printf("O menor número é %d.\n", segundoNumero);
    else
        printf("Os números são iguais.\n");

    return 0;
}