//
// Created by artur on 06/09/2024.
//
#include  <stdio.h>

int main() {
    int num,maV = -99999,meV = 99999, total = 0, media = 0, i = 0;
    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);
        if (num <= meV) {
            meV = num;
        }
        if (num >= maV) {
            maV = num;
        }
        total += num;
    }
    media = total / 10;
    printf("Maior valor: %d\nMenor valor: %d\nMedia: %d", maV, meV, media);
}