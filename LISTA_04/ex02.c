#include <stdio.h>

int ehPar(int num) {
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n = 7;
    if (ehPar(n)) {
        printf("%d e par\n", n);
    } else {
        printf("%d e impar\n", n);
    }
    return 0;
}