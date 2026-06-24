#include <stdio.h>

int main() {
    int n1, n2, inicio, fim;
    printf("Digite dois numeros: ");
    scanf("%d %d", &n1, &n2);
    
    // Descobrir quem é o menor e quem é o maior para o laço funcionar
    if (n1 < n2) {
        inicio = n1; fim = n2;
    } else {
        inicio = n2; fim = n1;
    }
    
    for (int i = inicio; i <= fim; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}