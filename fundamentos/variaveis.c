#include <stdio.h>

int main()
{
    int inteiro = 100;
    float decimal = 7.2;
    double super_decimal = 3.1415; // possui praticamente o dobro de precisão do float
    char letra = 'm';
    char nome[30] = "Maria Cláudia"; // para digitar frases, é preciso determinar o valor máximo que pode ser armazenado

    printf("****************************************\n");
    printf("** Exibição dos valores das Variáveis **\n");
    printf("****************************************\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Decimal: %.2f\n", decimal);
    printf("Decimal de precisão dupla: %f\n", super_decimal);
    printf("Decimal de precisão dupla (em notação científica): %e\n", super_decimal); // o %e exibe o número em notação científica
    printf("Caractere: %c\n", letra);
    printf("Nome: %s\n", nome);

    return 0;
}