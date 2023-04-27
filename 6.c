#include <stdio.h>

void menor_maior877(int notas877[], int tamanho877, int *menor877, int *maior877) {
    int i;
    
    *menor877 = notas877[0];
    *maior877 = notas877[0];
    
    for (i = 1; i < tamanho877; i++) {
        if (notas877[i] < *menor877) {
            *menor877 = notas877[i];
        }
        if (notas877[i] > *maior877) {
            *maior877 = notas877[i];
        }
    }
}

int main() {
    int notas877[4];
    int i, menor877, maior877;
    
    printf("Digite a nota de cada aluno:\n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &notas877[i]);
    }
    
    menor_maior877(notas877, 4, &menor877, &maior877);
    
    printf("A menor nota de um dos alunos foi de : %d\n", menor877);
    printf("A maior nota de um dos alunos foi de : %d\n", maior877);
    
    return 0;
}

