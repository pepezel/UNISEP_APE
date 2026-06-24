#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &n);
    
    // Laço externo para as linhas
    for (int i = 0; i < n; i++) {
        // Laço interno para as colunas
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n"); // Quebra a linha após desenhar uma fileira
    }
    return 0;
}