#include <stdio.h>

int main() {
    int vetor[6], menor;
    
    printf("Digite 6 numeros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    menor = vetor[0]; // Assume que o primeiro é o menor
    for (int i = 1; i < 6; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    printf("O menor valor digitado foi: %d\n", menor);
    return 0;
}