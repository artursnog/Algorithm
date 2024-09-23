//
// Created by artur on 11/09/2024.
//
#include <stdio.h>

void tipo(int num);

int main() {
    int a;
    scanf("%d", &a);
    tipo(a);
    return 0;
}

void tipo(int num) {
    if (num == 0) {
        printf("Numero igual a zero");
    }
    else {
        printf("Numero diferente de zero");
    }
}
