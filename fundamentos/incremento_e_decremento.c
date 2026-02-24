#include <stdio.h>

int main()
{
    printf("*********************************************\n");
    printf("**  Operadores de Incremento e Decremento  **\n");
    printf("*********************************************\n");    

    // declaração de variáveis
    int pos = 100;
    int pre = 100;

    // saídas
    printf("Valor inicial da variável 'pós': %d.\n", pos);
    printf("Valor inicial da variável 'pré': %d.\n", pre);

    printf("--------------- Pós Incremento ---------------\n");
    printf("Valor da variável na mesma linha do pós incremento: %d\n", pos++);
    printf("Valor da variável na linha seguinte ao pós incremento: %d\n", pos);

    printf("--------------- Pré Incremento ---------------\n");
    printf("Valor da variável na mesma linha do pós incremento: %d\n", ++pre); // no pré decremento, a variável atualiza na própria linha de incremento
    printf("Valor da variável na linha seguinte ao pós incremento: %d\n", pre);

    // declaração de variáveis
    pos = 100;
    pre = 100;

    // saídas
    printf("Valor inicial da variável 'pós': %d.\n", pos);
    printf("Valor inicial da variável 'pré': %d.\n", pre);

    printf("--------------- Pós Decremento ---------------\n");
    printf("Valor da variável na mesma linha do pós incremento: %d\n", pos--);
    printf("Valor da variável na linha seguinte ao pós incremento: %d\n", pos);

    printf("--------------- Pré Decremento ---------------\n");
    printf("Valor da variável na mesma linha do pós incremento: %d\n", --pre); // no pré decremento, a variável atualiza na própria linha de decremento
    printf("Valor da variável na linha seguinte ao pós incremento: %d\n", pre);
    
    return 0;
}