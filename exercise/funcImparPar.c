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
    if (num%2==0) {
        printf("Numero par");
    }else {
        printf("Numero impar");
    }
}