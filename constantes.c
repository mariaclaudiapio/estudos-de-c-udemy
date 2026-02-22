#include <stdio.h>

#define ICMS 0.18 // Declaração da Constante usando 'define'

int main()
{
    float preco, valor_do_icms;

    printf("Informe o valor do produto: ");
    scanf("%f", &preco);

    // ICMS = 0.20; (como trata-se de uma constante, o programa não permite alterações)

    valor_do_icms = preco * ICMS;

    printf("O valor do imposto a ser pago é de %.2f.\n", valor_do_icms);
    
    const float FRETE = 10.50; // Declaração da Constante usando 'const'

    // FRETE = 12.00; (como trata-se de uma constante, o programa não permite alterações)
    
    float total = preco + FRETE;
    
    printf("O valor total do produto é: %.2f.\n", total);

    return 0;
}

