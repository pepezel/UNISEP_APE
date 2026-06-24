#include <stdio.h>

int main() {
    int num, maior;
    printf("Digite um numero (999 para parar): ");
    scanf("%d", &num);
    
    if (num == 999) {
        printf("Nenhum numero valido digitado.\n");
        return 0;
    }
    
    maior = num; // O primeiro número vira o maior provisório
    
    while (1) {
        printf("Digite um numero (999 para parar): ");
        scanf("%d", &num);
        if (num == 999) break;
        
        if (num > maior) {
            maior = num;
        }
    }
    printf("O maior numero digitado foi: %d\n", maior);
    return 0;
}