//
// Created by artur on 26/08/2024.
//
#include <stdio.h>

int main() {
    int cont, num, fat = 1;
    scanf("%d",&num);
    if (num < 0) {
        printf("Nao existe fatorial de numero negativo.");
    }
    else{
        for (cont = 1; cont <= num; cont++) {
            fat = fat * cont;
        }
    }
    printf("%d", fat);
    return 0;
}