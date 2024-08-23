//
// Created by artur on 15/08/2024.
//
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    num1 = num1 * 2;
    num2 = num2 * 3;
    printf("O dobro do primeiro numero e %f e o triplo do segundo numero e %f", num1, num2);
    return 0;
}