#include <stdio.h>

int main() {
    int vetor[6], maior;
    
    printf("Digite 6 numeros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    maior = vetor[0]; // Assume que o primeiro é o maior
    for (int i = 1; i < 6; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    
    printf("O maior valor digitado foi: %d\n", maior);
    return 0;
}