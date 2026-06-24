#include <stdio.h>

unsigned long long calcularFatorial(int n) {
    unsigned long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int num = 5;
    printf("O fatorial de %d e: %llu\n", num, calcularFatorial(num));
    return 0;
}