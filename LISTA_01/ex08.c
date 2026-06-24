#include <stdio.h>

int main() {
    int ano;

    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0)
        printf("Ano de eleicao\n");
    else
        printf("Nao eh ano de eleicao\n");

    return 0;
}