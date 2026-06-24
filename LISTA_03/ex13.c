#include <stdio.h>

int main() {
    int tamanho = 10; // Definindo tamanho de exemplo igual a 10
    int vetor[10], maisRepetido, maxContagem = 0;
    
    printf("Digite %d numeros:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Analisar a frequência de cada número
    for (int i = 0; i < tamanho; i++) {
        int contagem = 0;
        for (int j = 0; j < tamanho; j++) {
            if (vetor[j] == vetor[i]) {
                contagem++;
            }
        }
        
        // Se a contagem deste número for maior do que a que já tínhamos guardado
        if (contagem > maxContagem) {
            maxContagem = contagem;
            maisRepetido = vetor[i];
        }
    }
    
    printf("O numero que mais se repete e: %d (aparece %d vezes)\n", maisRepetido, maxContagem);
    return 0;
}