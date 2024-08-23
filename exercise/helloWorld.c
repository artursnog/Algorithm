//
// Created by artur on 15/08/2024.
//
#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    printf("Olá, Mundo!\n");
    printf("Olá,\nMundo!\n");
    printf("\tOlá, Mundo!\n");
    printf("Olá,\n\tMundo!");
    return 0;
}