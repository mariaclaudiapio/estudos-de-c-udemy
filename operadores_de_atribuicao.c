#include <stdio.h>

int main()
{
    int numero;

    numero = 10;

    printf("O valor inicial da variável 'numero' é %d.\n", numero);
    
    numero += 5; // equivale a "numero = numero + 5;"
    
    printf("Agora o valor de 'numero' é %d.\n", numero);

    numero -= 2; // equivale a "numero = numero - 2;"
    
    printf("Agora o valor de 'numero' é %d.\n", numero);

    numero *= 2; // equivale a "numero = numero * 2;"
    
    printf("Agora o valor de 'numero' é %d.\n", numero);

    numero /= 2; // equivale a "numero = numero / 2;"
    
    printf("Agora o valor de 'numero' é %d.\n", numero);

    return 0;
}