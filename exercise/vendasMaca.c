//
// Created by artur on 23/08/2024.
//
#include <stdio.h>

int main(void) {
    int qtd;
    scanf("%d", &qtd);
    if(qtd < 12){
      printf("R$ %.2f\n", qtd * 1.30);
    }
    else {
        printf("R$ %.2f\n", qtd * 1.10);
    }

    return 0;
}