#include <stdio.h>

int main() {
    int num, soma = 0;
    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
        soma += num;
    } while (num != 0);
    
    printf("A soma de todos os numeros digitados e: %d\n", soma);
    return 0;
}