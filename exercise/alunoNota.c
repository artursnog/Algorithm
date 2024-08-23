//
// Created by artur on 23/08/2024.
//
#include <stdio.h>

int main(void) {
    double a1,a2,a3,mp,a4,mf;
    scanf("%lf %lf %lf", &a1, &a2, &a3);
    mp = (a1 + a2 + a3) / 3;
    if (mp >= 7) {
        printf("Media: %.2lf", mp);
    }
    else if(mp >= 3.5 && mp < 7) {

        printf("Media: %.2lf\nVoce deve fazer avaliacao final\n",mp);
        scanf("%lf", &a4);
        mf = ((6 * mp) + (4 * a4)) / 10;
        if (mf >= 5) {
            printf("Media final: %.2lf\nAprovado", mf);
        }
        else {
            printf("Media final: %.2lf\nReprovado", mf);
        }
    }
    else {
        printf("Media: %.2lf\nReprovado", mp);
    }
}