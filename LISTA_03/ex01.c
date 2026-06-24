#include <stdio.h>

int main() {
    int vetor[5];
    
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Valores digitados: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}