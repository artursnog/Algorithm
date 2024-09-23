//
// Created by artur on 06/09/2024.
//
#include <stdio.h>
int main() {
    int n1,n2,n3,temp;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 < n2) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 < n3) {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 < n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    printf("%d\n%d\n%d", n1, n2, n3);
}