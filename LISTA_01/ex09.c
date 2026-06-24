#include <stdio.h>

int main() {
    float peso;
    float frete;

    printf("Digite o peso da encomenda: ");
    scanf("%f", &peso);

    if (peso <= 5)
        frete = 10;
    else if (peso <= 20)
        frete = 20;
    else
        frete = 50;

    printf("Valor do frete: R$ %.2f\n", frete);

    return 0;
}