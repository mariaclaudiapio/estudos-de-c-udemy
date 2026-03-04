#include <stdio.h>

int main()
{
    int numero = 0;

    printf("Digite um número de 1 a 7, para ter um retorno do dia da semana.\n");
    scanf("%d", &numero);

    printf("Você digitou o número %d: ", numero);

    switch (numero)
    {
    case 1:
        printf("domingo\n");
        break;
    case 2:
        printf("segunda-feira\n");
        break;
    case 3:
        printf("terça-feira\n");
        break;
    case 4:
        printf("quarta-feira\n");
        break;
    case 5:
        printf("quinta-feira\n");
        break;
    case 6:
       printf("sexta-feira\n");
        break;
    case 7:
        printf("sábado\n");
        break;    
    default:
        printf("Esse valor é inválido. Digite um valor de 01 a 07.\n");
        break;
    }

    return 0;
}