#include <stdio.h>
#include <ctype.h> // Usado para a função tolower()

int contarVogais(char str[]) {
    int contador = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]); // Converte para minúsculo para testar uma vez só
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

int main() {
    char texto[] = "Linguagem C";
    printf("O texto \"%s\" tem %d vogais.\n", texto, contarVogais(texto));
    return 0;
}