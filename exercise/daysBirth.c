//
// Created by artur on 15/08/2024.
//
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    int idade, dias;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("Voce ja viveu aproximadamente %d dias", dias);
    return 0;
}
