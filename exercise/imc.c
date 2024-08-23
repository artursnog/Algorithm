//
// Created by artur on 16/08/2024.
//
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float height, weight, imc;
    printf("Digite aqui o seu peso em quilos: ");
    scanf("%f", &weight);
    printf("Digite aqui a sua altura em metros: ");
    scanf("%f", &height);
    imc = weight/(height*height);
    printf("Seu IMC é de: %.2f", imc);
    return 0;
}