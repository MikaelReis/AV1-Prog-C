#include <stdio.h>

int main() {
    int primeiro877, segundo877, terceiro877;
    int *ponteiro1 = &primeiro877;
    int *ponteiro2 = &segundo877;
    int *ponteiro3 = &terceiro877;
    
    printf("Digite três números: ");
    scanf("%d %d %d", ponteiro1, ponteiro2, ponteiro3);
    
    
    if (*ponteiro1 > *ponteiro2) 
        {int temp877 = *ponteiro1;
        *ponteiro1 = *ponteiro2;
        *ponteiro2 = temp877;}
    
    
    if (*ponteiro2 > *ponteiro3) 
        {int temp877 = *ponteiro2;
        *ponteiro2 = *ponteiro3;
        *ponteiro3 = temp877;}
    
    if (*ponteiro1 > *ponteiro2) 
        {int temp877 = *ponteiro1;
        *ponteiro1 = *ponteiro2;
        *ponteiro2 = temp877;}
    
    
    
    printf("números em ordem crescente: %d %d %d\n", *ponteiro1, *ponteiro2, *ponteiro3);
    printf("Endereços na memoria de cada numero: %p %p %p\n", ponteiro1, ponteiro2, ponteiro3);
    
    return 0;
}



