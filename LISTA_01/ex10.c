#include <stdio.h>

int main() {
    int velocidade;

    printf("Digite a velocidade: ");
    scanf("%d", &velocidade);

    if (velocidade <= 60)
        printf("Sem multa\n");
    else if (velocidade <= 80)
        printf("Multa leve\n");
    else if (velocidade <= 100)
        printf("Multa grave\n");
    else
        printf("Multa gravissima\n");

    return 0;
}