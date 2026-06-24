#include <stdio.h>

int main() {
    int num;
    do {
        printf("Digite um numero positivo (maior que 0): ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Numero invalido!\n");
        }
    } while (num <= 0);
    
    printf("Voce digitou o numero valido: %d\n", num);
    return 0;
}