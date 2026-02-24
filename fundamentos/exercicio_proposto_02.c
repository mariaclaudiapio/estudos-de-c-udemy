/* 
    Elabore um algoritmo que converta um determinado valor em reais para euros. 
    Esse algoritmo deve solicitar que o usuário informe a quantidade de moeda em reais 
    que deseja converter e a cotação do euro
*/
#include <stdio.h>

int main()
{
    float reais, cotacao, euros = 0;

    printf("Digite o valor em reais a ser convertido.\n");
    scanf("%f", &reais);

    printf("Digite a cotação do euro.\n");
    scanf("%f", &cotacao);

    euros = reais / cotacao;

    printf("A cotação de R$%.2f é de %.2f €.\n", reais, euros);

    return 0;
}
