/*
    --- Exercício Proposto 01 ---
    Elabore um programa que calcule a área de um triângulo.
    Considere a seguinte fórmula para fazer o cálculo: 
    area = (base x altura) / 2
*/
#include <stdio.h>

int main()
{
    float area, base, altura = 0;

    printf("Informe o valor da base do triângulo:\n");
    scanf("%f", &base);

    printf("Informe o valor da altura do triângulo:\n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A área do triângulo é %.2f unidades².\n", area);

    return 0;
}

