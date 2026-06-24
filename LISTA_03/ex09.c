#include <stdio.h>

int main() {
    int vetor[10];
    
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }
    
    printf("Vetor resultante: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}