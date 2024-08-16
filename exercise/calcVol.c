//
// Created by artur on 16/08/2024.
//
#include <stdio.h>

int main(void) {
    float v, c, h, w;
    printf("Digite o valor do comprimeito: ");
    scanf("%f", &c);
    printf("Digite o valor da largura: ");
    scanf("%f", &w);
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    v = c*w*h;
    printf("O volume da caixa e de: %f", v);
    return 0;
}
