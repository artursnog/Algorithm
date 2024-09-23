//
// Created by artur on 02/09/2024.
//
#include <stdio.h>

int main() {
    int num,i;
    scanf("%d", &num);
    for (i = 1; i <= 10; i++) {
        printf("Tabuada do %d por %d\n",num, i);
        printf("\tAdicao: %d + %d = %d\n", num, i, num + i);
        printf("\tSubtracao: %d - %d = %d\n", num, i, num - i);
        printf("\tMultiplicacao: %d * %d = %d\n", num, i, num * i);
        printf("\tDivisao: %d / %d = %d\n", num, i, num / i);
    }
}