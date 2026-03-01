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

    float limite_minimo = 5.0, limite_maximo = 12.0, temperatura;

    printf("Informe o valor da temperatura: \n");
    scanf("%f", &temperatura);

    if (temperatura > limite_maximo || temperatura < limite_minimo)
        printf("Alerta: temperatura fora da faixa permitida!!\n");
    else
        printf("Temperatura ok.\n");

    return 0;
}