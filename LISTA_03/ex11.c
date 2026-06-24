#include <stdio.h>

int main() {
    int vetor[10], aux;
    
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Bubble Sort para ordem decrescente (muda apenas o sinal de > para <)
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] < vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    
    printf("Vetor em ordem decrescente: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}