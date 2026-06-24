#include <stdio.h>

float mediaVetor(int vet[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    return (float)soma / tamanho;
}

int main() {
    int meuVetor[] = {10, 20, 30, 40, 50};
    int tam = 5;
    printf("A media do vetor e: %.2f\n", mediaVetor(meuVetor, tam));
    return 0;
}