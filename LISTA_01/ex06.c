#include <stdio.h>

int main() {
    float consumo, total;

    printf("Consumo em kWh: ");
    scanf("%f", &consumo);

    if (consumo <= 100)
        total = consumo * 0.50;
    else if (consumo <= 200)
        total = consumo * 0.75;
    else
        total = consumo * 1.00;

    printf("Valor total: R$ %.2f\n", total);

    return 0;
}