#include <stdio.h>

int calcularMDC(int a, int b) {
    int resto;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int num1 = 48, num2 = 18;
    printf("O MDC entre %d e %d e: %d\n", num1, num2, calcularMDC(num1, num2));
    return 0;
}