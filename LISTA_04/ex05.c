#include <stdio.h>

float celsiusParaFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32.0;
}

int main() {
    float tempC = 25.0;
    printf("%.1fC equivale a %.1fF\n", tempC, celsiusParaFahrenheit(tempC));
    return 0;
}