//
// Created by artur on 26/08/2024.
//
#include <stdio.h>

int main() {
    int cont = 10,nums=0;
    while (cont <=50) {
        if (cont%2==0) {
            printf("%d\n", cont);
            nums++;
        }
        cont++;
    }
    printf("Quantidade de numeros pares: %d", nums);
}
