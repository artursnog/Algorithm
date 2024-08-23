//
// Created by artur on 23/08/2024.
//
#include <stdio.h>

int main(void) {
    int cod, qtd;
    double total;
    printf("Codigo do item\tEspecificacao\tPreco unitario\n100\t\tCachorro quente\tR$ 10,00\n101\t\tBauru\t\tR$ 12,00\n102\t\tX-Salada\tR$ 15,00\n103\t\tHamburguer\tR$ 18,00\n104\t\tRefrigerante\tR$ 5,00\n");
    scanf("%d", &cod);
    switch (cod) {
        case 100:
            scanf("%d", &qtd);
            total = qtd * 10.0;
            printf("O valor a pagar e: R$ %.2lf\n", total);
            break;
        case 101:
            scanf("%d", &qtd);
            total = qtd * 12.0;
            printf("O valor a pagar e: R$ %.2lf\n", total);
            break;
        case 102:
            scanf("%d", &qtd);
            total = qtd * 15.0;
            printf("O valor a pagar e: R$ %.2lf\n", total);
            break;
        case 103:
            scanf("%d", &qtd);
            total = qtd * 18.0;
            printf("O valor a pagar e: R$ %.2lf\n", total);
            break;
        case 104:
            scanf("%d", &qtd);
            total = qtd * 5.0;
            printf("O valor a pagar e: R$ %.2lf\n", total);
            break;
        default:
            printf("Valor informado e invalido\n");
            break;
    }
}