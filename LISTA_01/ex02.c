#include <stdio.h>

int main() {
    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario > 3000)
        salario *= 1.05;
    else
        salario *= 1.10;

    printf("Salario final: R$ %.2f\n", salario);

    return 0;
}