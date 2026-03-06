#include <stdio.h>

int main()
{
    // *** Exercício Proposto 03 ***
    // Dados três valores reais, x, y e z, construa um algoritmo que leia
    // esses valores e verifique se a soma é maior, igual ou menor que 50
    // e informe esse resultado
    float x, y, z = 0;

    printf("Digite um valor para X:\n");
    scanf("%f", &x);

    printf("Digite um valor para Y:\n");
    scanf("%f", &y);

    printf("Digite um valor para Z:\n");
    scanf("%f", &z);

    float soma = x + y + z;

    if (soma < 50)
        printf("O valor da soma (%.2f) é menor do que 50.\n", soma);
    else if (soma > 50)
        printf("O valor da soma (%.2f) é maior do 50.\n", soma);
    else
        printf("O valor da soma (%.2f) é igual a 50.\n", soma);
    
    return 0;
}