//
// Created by artur on 23/08/2024.
//
#include <stdio.h>

int main(void) {
    int qtd;
    scanf("%d", &qtd);
    if(qtd < 12){
      printf("R$ %f\n", qtd * 1.30);
    }

    return 0;
}