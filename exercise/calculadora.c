//
// Created by artur on 23/08/2024.
//
#include <stdio.h>

int main(void) {
    float n1,n2;
    char op;
    scanf("%f %c %f", &n1, &op, &n2);
    switch(op) {
        case 'A':
            printf("%.2f+%.2f = %.2f\n", n1, n2, n1 + n2);
            break;
        case 'S':
            printf("%.2f-%.2f = %.2f\n", n1, n2, n1 - n2);
            break;
        case 'M':
            printf("%.2f*%.2f = %.2f\n", n1, n2, n1 * n2);
            break;
        case 'D':
            if (n2 != 0) {
                printf("%.2f/%.2f = %.2f\n", n1, n2, n1 / n2);
            }
            else {
                printf("A divisao e indefinida\n");
            }
            break;
        default:
            printf("Informe valores validos");
            break;
    }


    return 0;
}