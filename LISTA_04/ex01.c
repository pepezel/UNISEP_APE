#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int main() {
    int resultado = somar(15, 25);
    printf("A soma e: %d\n", resultado);
    return 0;
}