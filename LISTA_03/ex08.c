#include <stdio.h>

int main() {
    int vetor[10], soma = 0;
    float media;
    
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    
    media = (float)soma / 10;
    printf("A media e %.2f. Valores maiores que ela: ", media);
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > media) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
    return 0;
}