//
// Created by artur on 15/08/2024.
//
#include <stdio.h>

int main(void) {
    float dolar, real, convert;
    printf("Digite a cotacao do dolar para real: ");
    scanf("%f", &dolar);
    printf("Digite quantos reais voce digita converter para dolar: ");
    scanf("%f", &real);
    convert = real/dolar;
    printf("Seu valor convertido sera de: %f", convert);
    return 0;
}