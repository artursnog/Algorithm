//
// Created by artur on 15/08/2024.
//
#include <stdio.h>

int main(void) {
    float c, f;
    printf("Digite a temperatura em Celsius:");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("A temperatura em Fahrenheit e: %f", f);
    return 0;
}