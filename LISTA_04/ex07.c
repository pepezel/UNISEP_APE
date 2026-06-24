#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) return 0; // Não é primo
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Encontrou divisor, não é primo
    }
    return 1; // É primo
}

int main() {
    int num = 17;
    if (ehPrimo(num)) {
        printf("%d e primo\n", num);
    } else {
        printf("%d nao e primo\n", num);
    }
    return 0;
}