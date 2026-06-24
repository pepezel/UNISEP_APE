#include <stdio.h>

int main() {
    int vetor[6], maior, segundoMaior;
    
    printf("Digite 6 numeros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Inicialização correta com base nas primeiras posições
    if (vetor[0] > vetor[1]) {
        maior = vetor[0];
        segundoMaior = vetor[1];
    } else {
        maior = vetor[1];
        segundoMaior = vetor[0];
    }
    
    for (int i = 2; i < 6; i++) {
        if (vetor[i] > maior) {
            segundoMaior = maior; // O antigo maior vira o segundo maior
            maior = vetor[i];     // O atual se torna o maior absoluto
        } else if (vetor[i] > segundoMaior && vetor[i] != maior) {
            segundoMaior = vetor[i];
        }
    }
    
    printf("O segundo maior valor e: %d\n", segundoMaior);
    return 0;
}