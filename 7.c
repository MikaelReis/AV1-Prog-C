#include <stdio.h>

int main() {
    int nuns877[12];
    int pares877[6], impares877[6];
    int i, j = 0, k = 0;
    
    printf("Digite doze números inteiros:\n");
    for (i = 0; i < 12; i++) {
        scanf("%d", &nuns877[i]);
        if (nuns877[i] % 2 == 0) {  
            pares877[j] = nuns877[i];
            j++;
        } else { 
            impares877[k] = nuns877[i];
            k++;
        }
    }
    
    printf("Pares: ");
    for (i = 0; i < j; i++) {
        printf("%d ", pares877[i]);
    }
    printf("\nÍmpares: ");
    for (i = 0; i < k; i++) {
        printf("%d ", impares877[i]);
    }
    printf("\n");
    
    return 0;
}


