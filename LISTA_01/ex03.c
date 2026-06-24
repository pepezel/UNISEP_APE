#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("Digite a operacao (+,-,*,/): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Resultado: %.2f\n", a + b);
            break;
        case '-':
            printf("Resultado: %.2f\n", a - b);
            break;
        case '*':
            printf("Resultado: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Resultado: %.2f\n", a / b);
            else
                printf("Divisao por zero!\n");
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}