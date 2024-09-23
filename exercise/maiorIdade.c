//
// Created by artur on 26/08/2024.
//
#include <stdio.h>

int main() {
    int cont,idade,qtd;
    for(cont = 0; cont < 10; cont++) {
        scanf("%d", &idade);
        if (idade >= 18) {
            qtd++;
        }
    }
    printf("%d maiores de idade", qtd);
}