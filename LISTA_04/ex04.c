#include <stdio.h>

int maiorDeTres(int a, int b, int c) {
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    return maior;
}

int main() {
    printf("O maior numero entre 12, 45 e 23 e: %d\n", maiorDeTres(12, 45, 23));
    return 0;
}