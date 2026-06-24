#include <stdio.h>

int main() {
    int vetor[8], soma = 0;
    
    printf("Digite 8 numeros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    
    printf("A soma de todos os elementos e: %d\n", soma);
    return 0;
}