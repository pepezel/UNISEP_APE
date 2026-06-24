#include <stdio.h>

int main() {
    int num, qtde = 0;
    while (1) {
        printf("Digite un numero (negativo para parar): ");
        scanf("%d", &num);
        if (num < 0) {
            break; // Sai do loop imediatamente
        }
        qtde++;
    }
    printf("Foram digitados %d numeros positivos/nulos.\n", qtde);
    return 0;
}