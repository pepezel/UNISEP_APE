#include <stdio.h>

int main() {
    int num, divisores = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("%d nao e um numero primo.\n", num);
        return 0;
    }
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }
    
    if (divisores == 2) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }
    return 0;
}