//
// Created by artur on 26/08/2024.
//
#include <stdio.h>

int main() {
    double n1,n2,n3,m,cont;
    for (cont ==0 ; cont < 10; cont++) {
        scanf("%lf%lf%lf", &n1, &n2, &n3);
        m = (n1+n2+n3)/3;
        if (m >= 9) {
            printf("Conceito A\n");
        }
        else if (m>=7 && m<9) {
            printf("Conceito B\n");
        }
        else if (m>=6 && m<7) {
            printf("Conceito C\n");
        }
        else if (m>=4 && m<6) {
            printf("Conceito D\n");
        }
        else {
            printf("Conceito E\n");
        }
    }
    return 0;
}