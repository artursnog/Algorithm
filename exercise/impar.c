//
// Created by artur on 06/09/2024.
//
#include <stdio.h>
int main() {
    int i;
    for (i = 100; i <= 300; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
}