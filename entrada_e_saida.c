#include <stdio.h>

int main()
{  
    printf("**************************\n");
    printf("** Entrada e Saída em C **\n");
    printf("**************************\n");

    // Declaração de variáveis
    int numero;
    float nota;
    char nome[30];
    char conceito;

    // Entrada de dados
    printf("Digite o nome do aluno:\n");    
    scanf("%s", nome);

    printf("Digite a nota do aluno:\n");
    scanf("%f", &nota);

    printf("Digite a matrícula do aluno:\n");
    scanf("%d", &numero);

    printf("Digite o conceito do aluno:\n");
    setbuf(stdin, NULL); // comando para limpar o buffer do teclado na entrada de caracteres
    scanf("%c", &conceito);

    printf("O aluno %s, matrícula %d, tirou %.1f no trabalho e possui conceito %c.\n", nome, numero, nota, conceito);

    return 0;
}