//
// Created by artur on 23/09/2024.
//
#include <stdio.h>

float areaCirculo(float raio) {
    return 3.14 * raio * raio;
}

int main() {
    float raio;
    scanf("%f", &raio);
    printf("Area do circulo: %.2f", areaCirculo(raio));
    return 0;
}