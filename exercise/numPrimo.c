//
// Created by artur on 27/08/2024.
//
#include <stdio.h>

int main() {
    int x,y,i,j,primo;
    scanf("%d%d", &x,&y);
    if (x >= y || x < 0 || y < 0) {
        printf("Valores invalidos\n");
    }
    else {
        for (i = x; i <= y; i++) {
            primo = 1;
            for (j = 2; j < i; j++) {
                if (i % j == 0) {
                    primo = 0;
                    break;
                }
            }
            if (primo) {
                printf("%d\n", i);
            }
        }
    }
}