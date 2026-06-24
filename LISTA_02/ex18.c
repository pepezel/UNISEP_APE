#include <stdio.h>

int main() {
    int idade, soma = 0, contador = 0;
    while (1) {
        printf("Digite uma idade (0 para parar): ");
        scanf("%d", &idade);
        if (idade == 0) break;
        
        soma += idade;
        contador++;
    }
    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A media das idades e: %.2f\n", media);
    } else {
        printf("Nenhuma idade foi inserida.\n");
    }
    return 0;
}