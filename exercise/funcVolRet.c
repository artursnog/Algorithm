//
// Created by artur on 23/09/2024.
//
#include <stdio.h>

float volume(float a, float b, float c) {
    return a*b*c;
}

int main() {
    float comp, larg, alt;
    scanf("%f %f %f", &comp, &larg, &alt);
    printf("Volume = %.2f", volume(comp,larg,alt));
    return 0;
}