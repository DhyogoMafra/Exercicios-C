#include <stdio.h>

// Conversão Celsius (°C) em Fahrenheit (°F)

int main() {

    float celsius, fahrenheit;

    printf("Digite os graus(°C) atual: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("Graus em (°F): %.1f\n", fahrenheit);
}