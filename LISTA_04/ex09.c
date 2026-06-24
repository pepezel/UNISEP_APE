#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char aux;
    
    while (i < j) {
        aux = str[i];
        str[i] = str[j];
        str[j] = aux;
        i++;
        j--;
    }
}

int main() {
    char palavra[] = "Estrutura";
    printf("Original: %s\n", palavra);
    inverterString(palavra);
    printf("Invertida: %s\n", palavra);
    return 0;
}