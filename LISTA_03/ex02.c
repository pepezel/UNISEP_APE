#include <stdio.h>

int main() {
    int vetor[10];
    
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Numeros pares: ");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    return 0;
}