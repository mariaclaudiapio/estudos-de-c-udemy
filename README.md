<h1 align="center"> Linguagem C <h1>

## Variáveis

* Para armazenar mais de um caractere em uma variável, use o tipo 'char' seguido pelo nome da variável + a quantidade de caracteres máximos que ela pode armazenar. 
```
char nome[30] = "Maria Cláudia";
```
[⛓️‍💥 variaveis](./variaveis.c)   

## Entrada e saída de dados

* A principal função para _saída_ de dados em C é a **printf**. Ela exibe textos e valores de variáveis na tela. 
```
printf("Idade: %d", idade);
```
* A função para _entrada_ de dados pelo usuário em C é a **scanf**. Ela lê os dados do teclado e os armazena no endereço de uma variável.
```
printf("Digite sua idade:"); // linha necessária para instruir o usuário
scanf("%d", &idade); // o caractere '&' indica o endereço da variável
```
* O trecho de código ``` setbuf(stdin, NULL); ``` é necessário para limpar o buffer do teclado quando lidamos com entradas de caracteres.

[⛓️‍💥 variaveis](./entrada_e_saida.c)

## Constantes
Em C, a definição de uma constante se dá pelas seguintes codificações:
```
#define NOME_DA_VARIAVEL valor_da_variavel; 
```
ou
```
const tipo_da_variavel NOME_DA_VARIAVEL = valor_da_variavel;
``` 

* É padrão da linguagem declarar o nome das constantes com caixa alta;
* As constantes com 'define' são declaradas antes da função main.

[⛓️‍💥 constantes](./constantes.c)