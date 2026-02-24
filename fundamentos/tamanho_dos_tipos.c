#include <stdio.h>

int main()
{
    float teste;
    printf("--- TIPO --- | --- BYTES ---\n");
    printf("char.........: %d bytes\n", sizeof(char));
    printf("short........: %d bytes\n", sizeof(short));
    printf("int..........: %d bytes\n", sizeof(int));
    printf("long.........: %d bytes\n", sizeof(long));
    printf("float........: %d bytes\n", sizeof(float));
    printf("double.......: %d bytes\n", sizeof(double));
    printf("long double..: %d bytes\n", sizeof(long double));
    printf("\nO tamanho da variável 'teste' é: %d bytes.\n\n", sizeof teste);

    // O operador sizeof retorna a quantidade de memória alocada por tipo (ou por variável)
    // O sizeof pode ser utilizado de duas maneiras:
    // * sizeof nome_da_variavel
    // * sizeof (nome_do_tipo) 

    return 0;
}