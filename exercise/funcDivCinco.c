//
// Created by artur on 23/09/2024.
//
#include <stdio.h>

void Div5(int a) {
    if (a%5==0 && a!=0) {
        printf("Numero divisivel por 5");
    }
    else {
        printf("Numero nao divisivel por 5");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    Div5(num);
    return 0;
}