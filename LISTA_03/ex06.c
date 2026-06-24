#include <stdio.h>

int main() {
    int vetor[10], positivos = 0;
    
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0) {
            positivos++;
        }
    }
    
    printf("Quantidade de numeros positivos: %d\n", positivos);
    return 0;
}