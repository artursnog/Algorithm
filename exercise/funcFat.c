//
// Created by artur on 23/09/2024.
//
#include <stdio.h>

int fat(int a) {
    int soma = 1;
    if (a == 0) {
        return 1;
    }
    for (int i = 1; i <= a; i++) {
        soma = soma  * i;
    }
    return soma;
}

int main() {
    int num;
    while (1) {
        scanf("%d", &num);
        if (num >= 0) {
            break;
        }
        printf("Digite um numero maior ou igual a zero\n");
    }
    printf("O fatorial e: %d\n", fat(num));
    return 0;
}