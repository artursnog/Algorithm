//
// Created by artur on 23/09/2024.
//
#include <stdio.h>

void maiorMenor(int a) {
    if (a < 18) {
        printf("Voce e menor de idade");
    }
    else {
        printf("Voce e maior de idade");
    }
}

int main() {
    int idade;
    scanf("%d", &idade);
    maiorMenor(idade);
    return 0;
}