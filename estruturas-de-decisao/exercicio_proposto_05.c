// ** Exercício Proposto 05 **
// Elabore um programa que receba um número inteiro digitado pelo usário
// e que verifique se esse número se encontra na faixa de zero a 10.
// Retorne uma mensagem informando se o número está dentro ou fora da faixa😂
// mencionada.

#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Digite um número inteiro:\n");
    scanf("%d", &numero);

    if(numero >= 0 && numero <= 10)
        printf("O numero %d está compreendido no intervalo de 0 a 10.\n", numero);
    else
        printf("O número %d está fora da faixa dos números de 0 a 10.\n", numero);

    return 0;
}