//
// Created by artur on 15/08/2024.
//
#include <stdio.h>

int main(void) {
    int idade, dias;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("Voce ja viveu aproximadamente %d dias", dias);
    return 0;
}
