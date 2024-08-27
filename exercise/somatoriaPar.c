//
// Created by artur on 26/08/2024.
//
#include <stdio.h>

int main() {
    int cont = 0, soma = 0;
    while(cont <=500) {
        if (cont%2==0) {
            soma = soma + cont;
        }
        cont++;
    }
    printf("%d", soma);
}