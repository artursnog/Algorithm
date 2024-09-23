//
// Created by artur on 23/09/2024.
//
#include <stdio.h>

float media(float a, float b, float c) {
    return (a+b+c)/3;
}

char con(int a) {
    printf("Conceito: ");
    if (a >= 9) {
        printf("A");
    }
    else if (a >= 7 && a < 9) {
        printf("B");
    }
    else if (a >= 6 && a < 7) {
        printf("C");
    }
    else if (a >= 4 && a < 6) {
        printf("D");
    }
    else {
        printf("E");
    }
}

int main() {
    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    float m = media(n1, n2, n3);
    con(m);
    printf("\nMedia: %.2f\n", m);
}