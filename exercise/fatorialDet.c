//
// Created by artur on 26/08/2024.
//
#include <stdio.h>

int main() {
    int cont, fat = 1;
    for (cont = 1; cont <= 11; cont++) {
        fat = fat * cont;
        if (cont%2!=0) {
            printf("%d\n", fat);
        }
    }
}