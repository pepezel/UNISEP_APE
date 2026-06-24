#include <stdio.h>

int main() {
    int senhaCorreta = 1234;
    int tentativa;
    
    do {
        printf("Digite a senha: ");
        scanf("%d", &tentativa);
        if (tentativa != senhaCorreta) {
            printf("Senha incorreta! Tente novamente.\n");
        }
    } while (tentativa != senhaCorreta);
    
    printf("Acesso permitido!\n");
    return 0;
}