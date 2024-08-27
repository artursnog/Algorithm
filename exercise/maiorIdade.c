//
// Created by artur on 26/08/2024.
//
#include <stdio.h>

int main() {
    int cont,idade;
    for(cont = 0; cont < 10; cont++) {
        scanf("%d", &idade);
        if (idade >= 18) {
            printf("Voce e maior de idade\n");
        }
        else {
            printf("Voce e menor de idade\n");
        }
    }
}