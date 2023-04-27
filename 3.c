#include <stdio.h>

int main() {
    
    int grades877[10];
    int i, soma = 0;
    int maior877, menor877;

    for (i = 0; i < 10; i++) {
        printf("Digite a nota de cada um dos dez alunos %d: ", i+1);
        scanf("%d", &grades877[i]);
        soma += grades877[i];
    }


    float media877 = (float) soma / 10;


    maior877 = grades877[0];
    menor877 = grades877[0];
    for (i = 1; i < 10; i++) {
        if (grades877[i] > maior877) {
            maior877 = grades877[i];
        }
        if (grades877[i] < menor877) {
            menor877 = grades877[i];
        }
    }

    printf("Soma total das notas: %d\n", soma);
    printf("Media das notas: %.2f\n", media877);
    printf("Maior nota: %d\n", maior877);
    printf("Menor nota: %d\n", menor877);

    return 0;
}



