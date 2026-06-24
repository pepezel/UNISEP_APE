#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("\n--- MENU ---\n");
        printf("1: Dizer \"Ola\"\n");
        printf("2: Dizer \"Tudo bem?\"\n");
        printf("3: Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1: printf("Ola!\n"); break;
            case 2: printf("Tudo bem?\n"); break;
            case 3: printf("Saindo do programa...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 3);
    return 0;
}