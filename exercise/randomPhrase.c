//
// Created by artur on 15/08/2024.
//
#include <stdio.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    printf("Bom Dia!\n");
    printf("Boa\nManhã!\n");
    printf("\tBoa Tarde!\n");
    printf("Boa\n\tNoite!");
    return 0;
}