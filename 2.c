#include <stdio.h>

int main() {
    
    int numero877;
    
    printf("Digite um numero maior que 1, para vermos para vermos os numeros impares menores ou iguais a que ele: ");
    scanf("%d", &numero877);

    if (numero877 < 1) {printf("O numero deve ser maior ou igual a 1.\n");} 
    else {printf("Numeros impares menores ou iguais a %d e maiores ou iguais a 1:\n", numero877);
        for (int i = 1; i <= numero877; i += 2) {
            printf("%d\n", i);}
        
    }
    return 0;
}
