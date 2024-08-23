//
// Created by artur on 23/08/2024.
//
#include <stdio.h>

int main(void) {
    int n1,n2;
    scanf("%d%d", &n1, &n2);
    if (n2 != 0) {
        if (n1%n2 == 0) {
            printf("E divisivel!");
        }
        else {
            printf("Nao e divisivel!");
        }
    }
    else {
        printf("A divisao e indefinida");
    }
    return 0;
}