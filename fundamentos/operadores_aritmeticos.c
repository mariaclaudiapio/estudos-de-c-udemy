#include <stdio.h>

int main()
{
    float primeiroNumero, segundoNumero, soma, subtracao, multiplicacao, divisao;
    
    printf("Digite o primeiro número inteiro:\n");
    scanf("%f", &primeiroNumero);

    printf("Digite o segundo número inteiro:\n");
    scanf("%f", &segundoNumero); 

    soma = primeiroNumero + segundoNumero;
    subtracao = primeiroNumero - segundoNumero;
    multiplicacao = primeiroNumero * segundoNumero;
    divisao = primeiroNumero / segundoNumero; 
    
    printf("O resultado da soma de %.2f e %.2f é %.2f.\n", primeiroNumero, segundoNumero, soma);
    printf("O resultado da subtração de %.2f e %.2f é %.2f.\n", primeiroNumero, segundoNumero, subtracao);
    printf("O resultado da multiplicação de %.2f e %.2f é %.2f.\n", primeiroNumero, segundoNumero, multiplicacao);
    printf("O resultado da divisão de %.2f e %.2f é %.2f.\n", primeiroNumero, segundoNumero, divisao);
        
    return 0;
}