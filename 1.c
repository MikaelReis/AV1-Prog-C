#include <stdio.h>

int main() {
    
    float valorTotal877, desconto877, valorFinal877;
    printf("- 12%%  de desconto se a compra for menor ou igual que R$5.000,00\n");
    printf("- 7%%  de desconto se a compra for maior que R$ 5.000,00 e menor ou igual a R$ 8.000,00\n");
    printf("- 4%%  de desconto se for maior que R$ 8.000,00 e menor ou igual a R$ 10.000,00\n");
    printf("- 3%% de desconto para compras acima de R$ 10.000,00.");
    printf("\n\nInforme o valor total da  compra: R$ ");
    scanf("%f", &valorTotal877);

    if(valorTotal877 <= 5000) {
        desconto877 = valorTotal877 * 0.12;
    } else if(valorTotal877 > 5000 && valorTotal877 <= 8000) {
        desconto877 = valorTotal877 * 0.07;
    } else if(valorTotal877 > 8000 && valorTotal877 <= 10000) {
        desconto877 = valorTotal877 * 0.04;
    } else {
        desconto877 = valorTotal877 * 0.03;
    }

    valorFinal877 = valorTotal877 - desconto877;

    printf("Valor do desconto: R$ %.2f\n", desconto877);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal877);

    return 0;
}



