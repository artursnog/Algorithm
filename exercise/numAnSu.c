//
// Created by artur on 15/08/2024.
//
#include <stdio.h>

int main(void) {
    int num, ant, suc;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("O antecessor e %d e o sucessor e %d", ant, suc);
    return 0;
}