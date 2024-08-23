//
// Created by artur on 16/08/2024.
//
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float c, h, w;
    printf("Digite o valor do comprimento: ");
    scanf("%f", &c);
    printf("Digite o valor da largura: ");
    scanf("%f", &w);
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    const float v = c * w * h;
    printf("O volume da caixa e de: %f", v);
    return 0;
}
