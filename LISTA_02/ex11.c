#include <stdio.h>

int main() {
    int num;
    unsigned long long fatorial = 1; // Usado para suportar números maiores
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }
    printf("O fatorial de %d e: %llu\n", num, fatorial);
    return 0;
}