#include <stdio.h>

int maiorIdade(int a, int b, int c);
int menorIdade(int a, int b, int c);

int main() {
    int primeira877, segunda877, terceira877;
    
    int  maior, menor;

    printf("Digite a idade da primeira pessoa: ");
    scanf("%d", &primeira877);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%d", &segunda877);

    printf("Digite a idade da terceira pessoa: ");
    scanf("%d", &terceira877);

    maior = maiorIdade(primeira877, segunda877, terceira877);
    menor = menorIdade(primeira877, segunda877, terceira877);

    printf("A maior idade é: %d\n", maior);
    printf("A menor idade é: %d\n", menor);

    return 0;
}

int maiorIdade(int a, int b, int c) {
    int maior;

    if (a > b && a > c) {maior = a;}
    else if (b > a && b > c) {maior = b;} 
    else{maior = c;}

    return maior;
}

int menorIdade(int a, int b, int c) {
    int menor;

    if (a < b && a < c) {menor= a;} 
    else if (b < a && b < c) {menor = b;}
    else {menor = c;}

    return menor;
}

