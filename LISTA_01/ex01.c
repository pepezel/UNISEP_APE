#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (b != 0 && a % b == 0)
        printf("%d eh multiplo de %d\n", a, b);
    else
        printf("%d nao eh multiplo de %d\n", a, b);

    return 0;
}